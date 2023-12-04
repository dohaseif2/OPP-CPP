#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int tos;
    int size;

public:
    int getSize()
    {
        return size;
    }
    Stack()
    {
        tos = 0;
        size=5;
        arr=new int[size];

    }
    Stack(int _size)
    {
        tos = 0;
        size=_size;
        arr = new int[size];
    }
    Stack(Stack const & s)
    {
        tos = s.tos;
        size = s.tos;
        arr=new int[size];
        for(int i =0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
    }
    push(int d)
    {
        if(tos==size)
        {
            cout<<"\n Stack is full";
            return 0;
        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;
        }
    }
    pop(int& d)
    {
        if(tos==0)
        {
            cout<<"\n stack is empty";
            return 0;
        }
        else
        {
            tos--;
            d = arr[tos];
            return 1;
        }
    }


    Stack operator=(Stack const& s)
    {
        tos=s.tos;
        size =s.size;
        arr= new int[size];
        for(int i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        return *this ;
    }
    Stack operator+(Stack const & s)
    {
        Stack newStack(s.size+size);

        newStack.size=s.size+size;
        for(int i=0; i<s.size; i++)
        {
            newStack.push(s.arr[i]);
        }
        for(int i=0; i<size; i++)
        {
            newStack.push(arr[i]);
        }
        newStack.tos=s.tos+tos;

        return newStack;


    }
};
int ViewAllContant(Stack& s);
int main()
{
    int x;
    Stack s1(4), s2(3), s3,s4;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s2.push(5);
    s2.push(6);
    s2.push(7);
    cout<<"\n";


    s3= s1+s2;
    ViewAllContant(s3);
    s1=s2;
    cout<<"\n";
    ViewAllContant(s1);

    return 0;
}
int ViewAllContant(Stack & s)
{
    cout<<"\nElements is :";
    int x;
    for(int i =0; i<s.getSize(); i++)
    {
        if(s.pop(x)==1)
        {
            cout<<x <<"  " ;

        }
    }
}
