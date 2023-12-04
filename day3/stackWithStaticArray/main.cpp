#include <iostream>

using namespace std;
class Stack
{
    int arr[5];
    int tos;
    int size;

public:
    Stack()
    {
        tos = 0;
        size=5;
        cout<<"\nconstructor\n";
    }
    ~Stack()
    {
        cout<<"\ndestructor\n";
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


};
void myfun(Stack s2)
{

    int x ;
    s2.pop(x);
    s2.pop(x);
    s2.pop(x);
    s2.pop(x);
}
int main()
{
    int x;
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    myfun(s1);
    if(s1.pop(x)==1)
    {
        cout<<x ;
    }

    return 0;
}
