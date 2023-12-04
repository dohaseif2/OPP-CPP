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
    cout<<"area ="<<s1.calcArea();
    cout<<"\n";
    Triangle* t1 = new Triangle(20,30);
    myfun(t1);


    return 0;
}
