#include<iostream>
using namespace std;
void calculate(int a, int b)
{
       cout<<a<<"+"<<b<<"="<<a+b;  
}
int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Enter the number : ";
    cin>>b;
    calculate(a,b);
    return 0;
}