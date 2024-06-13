#include<iostream>
using namespace std;
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

class Triangle:public shape
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
  int a, b;
  cout<<"Enter the Base of Triangle:- ";
  cin>>a;
  cout<<"Enter the Height of Triangle:- ";
  cin>>b;

  Triangle Tri;
  Tri.setbase(a);
  Tri.setheight(b);

  cout<<"Area of Triangle:- "<<Tri.getArea();
  return 0;

}
