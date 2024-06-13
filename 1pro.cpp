#include<iostream>
using namespace std;
// Base Shape
class shape
{
    public:

    int width, height, base;
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
    void setbase(int b)
    {
        base=b;
    }
};
//Derived class
class Rectangle:public shape
{
    public:
    int getArea()
    {
        return(width*height);
    }
};
class  Triangle:public shape
{
    public:
    int getArea()
    {
        return(0.5*base*height);
    }
};
//Main
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setwidth(5);
    Rect.setheight(7);
    Tri.setheight(5);
    Tri.setbase(10);
    //Print the area of the object
    cout<<"Total Area of Rectangle."<<Rect.getArea()<<endl;
    cout<<"Total Area of Triangle."<<Tri.getArea()<<endl;
    return 0;
}