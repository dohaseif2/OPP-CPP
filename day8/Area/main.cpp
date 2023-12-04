#include <iostream>

using namespace std;
class Shape
{
protected :
    int dim1;
    int dim2;
public :
    Shape(int _dim1=1,int _dim2=1):dim1(_dim1),dim2(_dim2){}
    void setDim1(int _dim1)
    {
        dim1=_dim1;
    }
    void setDim2(int _dim2)
    {
        dim2=_dim2;
    }
    void setComplex(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    int getDim1()
    {
        return dim1;
    }
    int getDim2()
    {
        return dim2;
    }
    void print()
    {
        cout<<"("<<dim1<<":"<<dim2<<")";
    }
    virtual float calcArea()=0;


};
class Triangle:public Shape
{
public:
    Triangle(int _dim1 ,int _dim2):Shape(_dim1,_dim2){}
    float calcArea()
    {
        return dim1*dim2*(.5);
    }

};
class Square : protected Shape
{
public:
    Square(int dim1=1):Shape(dim1,dim1) {}

    void setDim1(int _dim1)
    {
        dim1=dim2=_dim1;
    }
    void setDim2(int _dim2)
    {
        dim1=dim2=_dim2;
    }

    void print()
    {
        Shape::print();
    }
    float calcArea()
    {
        return dim1*dim2;
    }

};
class Rect: public Shape
{
    public :
    Rect(int dim1=1,int dim2=1):Shape(dim1,dim2) {}
    float calcArea()
    {
        return dim1*dim2;
    }
};
void myfun(Shape * sh)
{
    cout<<"Area = "<<sh->calcArea();
}
int main()
{
    Rect r1(10,20);
    Rect* r2 = new Rect(10,30);
    myfun(r2);
    cout<<"\n";
    Square s1(30);

    myfun(&s1);
    cout<<"area ="<<s1.calcArea();
    cout<<"\n";
    Triangle* t1 = new Triangle(20,30);
    myfun(t1);


    return 0;
}
