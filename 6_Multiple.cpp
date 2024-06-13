#include<iostream>
using namespace std;
//base class 
class base
{
   public :
   int x;
   void setdata()
   {
    cout<<"Enter the Value of x:- ";
    cin>>x;
   }

};
class base1
{
   public :
   int y;
   void getdata()
   {
    cout<<"Enter the Value if y:- ";
    cin>>y;
   }
};
//derived class
class derived:public base, public base1
{
  public :
  void add()
  {
  cout<<"The Addition is "<<x+y;
  }
};
//Main
int main()
{
    derived S1;
    S1.setdata();
    S1.getdata();
    S1.add();
    return 0;
}