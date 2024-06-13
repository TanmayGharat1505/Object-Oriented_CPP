#include<iostream>
using namespace std;
int main()
{
    int a=0, b=1, n, next;
    int i=1;
    cout<<"Enter the Number till you want Fibonacci series:- ";
    cin>>n;
    cout<<"Series is : "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    while(i<=n)
    {
       next=a+b;
       a=b;
       b=next;
       cout<<next<<endl;
       i++;
    }
 
}