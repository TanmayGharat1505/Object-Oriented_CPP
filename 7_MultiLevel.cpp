#include<iostream>
using namespace std;
// base class
class base
{
    public :
    int x;
    void setdata()
    {
        cout<<"Enter the value of x:- ";
        cin>>x;
    }
};
// derived class 1
class derived1:public base
{
    public :
    int y;
    void getdata()
    {
        cout<<"Enter the value of y:- ";
        cin>>y;
    }
};
// derived class 2
class derived2: public derived1
{
   private :
   int z;
   public:
   void display()
   {
     cout<<"Enter the value of z:- ";
     cin>>z;
   }
   void product()
   {
    cout<<"The Product of "<<x<<" "<<y<<" "<<z<<" is "<<x*y*z;
   }
};
//Main
int main()
{
    derived2 a;
    a.setdata();
    a.getdata();
    a.display();
    a.product();
    return 0;
}