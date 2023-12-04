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
class Rect
{
    Point topRight;
    Point bottomLeft;
public :
    Rect():topRight(0),bottomLeft(0)
    {
        cout<<"\nparameterless ctor - Rect ";
    }
    Rect(int x1,int y1,int x2,int y2):topRight(x1,y1),bottomLeft(x2,y2)
    {
        cout<<"Rect";
    }
    Rect(Point p1,Point p2):topRight(p1),bottomLeft(p2)
    {
        cout<<"Rect : ";
    }
    void setTopRight(int x,int y)
    {
        topRight.setPoint(x,y);
    }
    void setTopRight(Point p)
    {
        topRight=p;
    }
    void setBottomLeft(Point p)
    {
        bottomLeft=p;
    }
    void setBottomLeft(int x,int y)
    {
        bottomLeft.setPoint(x,y);
    }
    void setPoints(Point p1,Point p2)
    {
        topRight=p1;
        bottomLeft=p2;
    }
    Point getTopRight()
    {
        return topRight;
    }
    Point getBottomLeft()
    {
        return bottomLeft;
    }
    void print()
    {
        topRight.print();
        bottomLeft.print();
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
class Triangle
{
    Point pointOne;
    Point pointTwo;
    Point pointThree;
public :
    Triangle():pointOne(0),pointTwo(0),pointThree(0)
    {
        cout<<"\nparameterless ctor - Triangle";
    }
    Triangle(int x1,int y1, int x2, int y2, int x3, int y3):pointOne(x1),pointTwo(x2,y2),pointThree(x3,y3)
    {
        cout<<"Triangle : ";
    }
    Triangle(Point p1,Point p2,Point p3):pointOne(p1),pointTwo(p2),pointThree(p3)
    {
        cout<<"Triangle : ";
    }
    void setPointOne(Point p)
    {
        pointOne= p;
    }
    void setPointOne(int x,int y)
    {
        pointOne.setPoint(x,y);
    }
    void setPointTwo(Point p)
    {
        pointTwo = p;
    }
    void setPointTwo(int x, int y)
    {
        pointTwo.setPoint(x,y);
    }
    void setPointThree(Point p)
    {
        pointThree=p;
    }
    void setPointThree(int x, int y)
    {
        pointThree.setPoint(x,y);
    }
    void setPointers(Point p1,Point p2,Point p3)
    {
        pointOne=p1;
        pointTwo=p2;
        pointThree=p3;
    }
    Point getPointOne()
    {
        return pointOne;
    }
    Point getPointTwo()
    {
        return pointTwo;
    }
    Point getPointThree()
    {
        return pointThree;
    }
    void print()
    {
        pointOne.print();
        pointTwo.print();
        pointThree.print();
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
    Pic(Rect* _rptr , Circle* _cptr ,int _nr ,int _nc)
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
        for(int i=0;i<nr;i++)
        {
            cout<<"\nRectangle number "<<i+1;
            rptr[i].print();
        }

        for(int i=0;i<nc;i++)
        {
            cout<<"\nCircle number "<<i+1;
            cptr[i].print();
        }


    }
};
int main()
{


    Rect arr1[3]={Rect(200,200,300,300),Rect(100,100,200,200),Rect(50,50,100,100)};
    Circle arr2[3]={Circle(200,100,40),Circle(300,400,40),Circle(200,150,40)};

    Pic p1(arr1,arr2,3,3);
    p1.paint();

    return 0;
}
