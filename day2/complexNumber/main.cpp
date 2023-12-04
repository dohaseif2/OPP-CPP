#include <iostream>

using namespace std;


class Complex
{
    int real;
    int img;
public:
    Complex(Complex& c){
        c.real=0;
        c.img =0;
    }
    Complex()
    {
        real=img=0;
    }
    Complex(int _real, int _img)
    {
        real=_real;
        img = _img;
    }
    Complex(int _real)
    {
        real=_real;
        img = 0;

    }
    ~Complex(){
        cout<<"\ndestructor";
    }


    void setReal(int _real)
    {
        real=_real;
    }
    void setImg (int _img)
    {
        img =_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void print()
    {
        if(img<0)
            cout<<real<<img<<"j";
        else if(img>0)
            cout<<real<<"+"<<img<<"j";
        else
            cout<<real;
    }
    Complex add(Complex c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }


};
Complex add(Complex &x,Complex& y);
int main()
{
    Complex c1(2,3),c2(2,4);
    Complex c3 , c4;
    //c1.print();
    c3=c2.add(c1);
    //cout<<"\n";
    //c3.print();
    //cout<<"\n";
    c4=add(c1,c2);
    c4.print();
    return 0;
}
/*Complex add(Complex x,Complex y)
{
    Complex res;
    res.setReal(x.getReal()+y.getReal());
    res.setImg(x.getImg()+y.getImg());
    return res;
}*/
Complex add(Complex& x,Complex& y)
{
    Complex res;
    res.setReal(x.getReal()+y.getReal());
    res.setImg(x.getImg()+y.getImg());
    return res;
}

