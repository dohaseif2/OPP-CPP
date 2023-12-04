#include <iostream>

using namespace std;

class Point
{
    int x ;
    int y ;
public :
    Point()
    {
        x=0;
        y=0;
    }
    Point(int xy)
    {
        x=y=xy;
    }
    Point(int _x,int _y)
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
    void setPoint(int _x,int _y)
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
    void print()
    {
        cout<<"\n"<<"("<<x<<","<<y<<")";
    }
};
class Shape
{
protected:
    Point firstPoint;
    Point secondPoint;
public :
    Shape()
    {
        firstPoint=NULL;
        secondPoint=NULL;
    }
    Shape(int x1,int y1,int x2,int y2):firstPoint(x1,y1),secondPoint(x2,y2)
    {
    }
    Shape(Point p1,Point p2):firstPoint(p1),secondPoint(p2)
    {
    }
    void setFirstPoint(int x,int y)
    {
        firstPoint.setPoint(x,y);
    }
    void setFirstPoint(Point p)
    {
        firstPoint=p;
    }
    void setSecondPoint(Point p)
    {
        secondPoint=p;
    }
    void setSecondPoint(int x,int y)
    {
        secondPoint.setPoint(x,y);
    }
    void setPoints(Point p1,Point p2)
    {
        firstPoint=p1;
        secondPoint=p2;
    }
    virtual void print()
    {
        firstPoint.print();
        secondPoint.print();
    }

};
class Rect :public Shape
{

public :
    Rect()
    {
        cout<<"\nparameterless ctor - Rect ";
    }
    Rect(int x1,int y1,int x2,int y2):Shape(x1,y1,x2,y2)
    {
        cout<<"Rect : ";
    }
    Rect(Point p1,Point p2):Shape(p1,p2)
    {
        cout<<"Rect : ";
    }

    Point getFirstPoint()
    {
        return firstPoint;
    }
    Point getSecondPoint()
    {
        return secondPoint;
    }
    void print()
    {
        Shape::print();
    }

};


class Triangle:public Shape
{

    Point thirdPoint;
public :
    Triangle()
    {
        cout<<"\nparameterless ctor - Triangle";
    }
    Triangle(int x1,int y1, int x2, int y2, int x3, int y3):Shape(x1,y1,x2,y2),thirdPoint(x3,y3)
    {
        cout<<"Triangle : ";
    }
    Triangle(Point p1,Point p2,Point p3):Shape(p1,p2),thirdPoint(p3)
    {
        cout<<"Triangle : ";
    }
    void setPointOne(Point p)
    {
        firstPoint= p;
    }
    void setPointOne(int x,int y)
    {
        firstPoint.setPoint(x,y);
    }
    void setPointTwo(Point p)
    {
        secondPoint = p;
    }
    void setPointTwo(int x, int y)
    {
        secondPoint.setPoint(x,y);
    }
    void setPointThree(Point p)
    {
        thirdPoint=p;
    }
    void setPointThree(int x, int y)
    {
        thirdPoint.setPoint(x,y);
    }
    void setPointers(Point p1,Point p2,Point p3)
    {
        firstPoint=p1;
        secondPoint=p2;
        thirdPoint=p3;
    }
    Point getPointOne()
    {
        return firstPoint;
    }
    Point getPointTwo()
    {
        return secondPoint;
    }
    Point getPointThree()
    {
        return thirdPoint;
    }
    void print()
    {
        Shape::print();
        thirdPoint.print();
    }


};
class Circle
{
    Point center;
    int rad;
public:
    Circle():center(0)
    {
        rad=0;
        cout<<"\nparameterless ctor - circle";
    }
    Circle(int x,int y,int _rad):center(x,y)
    {
        rad=_rad;
        cout<<"Circle : ";
    }
    Circle(Point p,int _rad):center(p)
    {
        rad=_rad;
        cout<<"Circle : ";
    }
    void setCenter(int x,int y)
    {
        center.setPoint(x,y);
    }
    void setCenter(Point p)
    {
        center = p;
    }
    void setRad(int _rad)
    {
        rad=_rad;
    }
    Point getCenter()
    {
        return center;
    }
    int getRad()
    {
        return rad;
    }
    void print()
    {
        center.print();
        cout<<" , radius = "<<rad;
    }




};
class Pic
{
    Rect* rptr;
    Circle * cptr;
    int nr;
    int nc;
public :
    Pic()
    {
        rptr=NULL;
        cptr=NULL;
        nr=0;
        nc=0;
    }
    Pic(Rect* _rptr, Circle* _cptr,int _nr,int _nc)
    {
        rptr=_rptr;
        nr=_nr;
        cptr=_cptr;
        nc=_nc;
    }
    void setCircles(Circle * _cptr,int _nc)
    {
        cptr =_cptr;
        nc=_nc;
    }
    void setRects(Rect * _rptr,int _nr)
    {
        rptr =_rptr;
        nr=_nr;
    }
    void paint()
    {
        for(int i=0; i<nr; i++)
        {
            cout<<"\nRectangle number "<<i+1;
            rptr[i].print();
        }

        for(int i=0; i<nc; i++)
        {
            cout<<"\nCircle number "<<i+1;
            cptr[i].print();
        }


    }
};
void myfun(Shape* sh)
{
    sh->print();
}
int main()
{

    Rect r1(100,200,300,400);
    myfun(&r1);
    cout<<"\n";
    Triangle t1(100,200,300,400,500,600);
    myfun(&t1);


    return 0;
}
