#include<iostream>
using namespace std;
int power(int n, int p)
{
     int i; 
     int result=1;
     for(i=1; i<=p; i++)
     {
       result*=n;
     }
  cout<<result;
    //    while(p!=0)
    //    {
    //     result*=n;
    //     p--;
    //    }
    //    cout<<result;
       return 0;

}

int main()
{
    int n, p;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    cout<<"Enter the Power : "<<endl;
    cin>>p;
    power(n, p);
    return 0;
}