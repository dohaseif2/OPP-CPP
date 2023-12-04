#include <iostream>

using namespace std;


class Complex
{
    int real;
    int img;
public:

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

    void setReal(int _real)
    {
        real=_real;
    }
    void setImg (int _img)
    {
        img =_img;
    }
    void setComplex (int _img,int _real)
    {
        img =_img;
        real=_real;
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
    Complex operator+( Complex const& c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    Complex operator+(int x)
    {
        Complex res ;
        res.real= x+real;
        res.img=img;
        return res;
    }
    Complex operator+=( Complex const& c)
    {
        real = real + c.real;
        img = img+c.img;
        return *this;
    }
    int operator==(Complex c)
    {
        return real==c.real && img==c.img;

    }

    int operator!=(Complex c)
    {
        return !(*this==c);
    }
    Complex operator++()
    {
        real++;
        return *this;
    }
    Complex operator++(int)
    {
        Complex res(real,img);
        real++;
        return res;
    }
    explicit operator int()
    {
        return real;
    }

    friend Complex operator+(int left,Complex right);

};

Complex operator+(int left,Complex right)
{

    return right+left;
}

int main()
{
    Complex c1(2,3),c2(2,4),c3, c4,c5(2,3),c6;
    c3=3+c1;
    c3.print();

    cout<<"\n";
    c1+=c2;
    if(c1==c2)
    {
        cout <<"equals";
    }
    else
    {
        cout<<"not equals";
    }
    cout<<"\n";
    if(c1!=c2)
    {
        cout <<"not equal";
    }
    else
    {
        cout<<"nequals";
    }
    cout<<"\n";
    c1.print();
    cout<<"\n";
    c6=c5++;
    c6.print();
    c5.print();
    int x=0;
    x=(int)c1;
    cout<<"\n"<<x;
    return 0;
}
