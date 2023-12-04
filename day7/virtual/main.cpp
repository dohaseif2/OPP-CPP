#include <iostream>

using namespace std;
class Parent
{
protected:
    int x ;
    int y ;
public:
    Parent()
    {
        x=0;
        y=0;
    }
    Parent(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    void setX(int _x)
    {
        x=_x;
    }
    void setY(int _y)
    {
        y=_y;
    }
    void setParent(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    virtual void print()
    {
        cout<<"x = "<<x<<" , "<<"y = "<<y;
    }
    virtual int add()
    {
        return x+y;
    }
    virtual int mul()
    {
        return x*y;
    }
};
class Child1:public Parent
{
    int z;

public:
    Child1(int _x=0,int _y=0,int _z=0):Parent(_x,_y)
    {
        z=_z;
    }
    void print()
    {
        Parent::print();
        cout<<" , z = "<<z;
    }
    int add()
    {
        return Parent::add()+z;
    }
    int mul()
    {
        return Parent::mul()*z;
    }

};

class Child2:public Parent
{
    int z,a;

public:
    Child2(int _x=0,int _y=0,int _z=0,int _a=0):Parent(_x,_y)
    {
        z=_z;
        a=_a;
    }
    void print()
    {
        Parent::print();
        cout<<" , z = "<<z<<" , a = "<<a;
    }
    int add()
    {
        return Parent::add()+z+a;
    }
    int mul()
    {
        return Parent::mul()*z*a;
    }
};

void myfun1(Parent * p)
{
    p->print();
}
void myfun2(Parent * p)
{
    cout<<"Add = "<<p->add();
}
void myfun3(Parent *arr[],int Size)
{

    int mul=1;
    for(int i=0;i<Size;i++)
    {
        mul+=arr[i]->mul();
    }
    cout<<"Mul = "<<mul;
}
int main()
{

    Parent p1(1,3);
    Child1 c1(7,8,9);
    myfun1(&c1);
    cout<<"\n";
    Child2 c2(1,2,3,4);
    myfun2(&c2);
    cout<<"\n";
    Parent *arr[3]={&p1,&c1,&c2};
    myfun3(arr,3);
    return 0;
}
