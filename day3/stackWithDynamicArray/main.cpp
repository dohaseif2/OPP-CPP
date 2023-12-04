#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int tos;
    int size;

public:
    int getSize(){
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
        cout<<"\nconstructor";
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
        cout<<"\ncopy constructor";
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

    ~Stack()
    {
        cout<<"\ndestructor";
    }
};
int ViewAllContant(Stack& s);
int main()
{
    int x;
    Stack s1(6);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout<<"\n";

    if(s1.pop(x)==1)
    {
        cout<<x ;
    }

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
            cout<<x <<"," ;

        }
    }
}
