#include<iostream>
using namespace std;
int main()
{
    int n, i=1, fact = 1;
    cout<<"Enter the Factorial:- ";
    cin>>n;
    while( i<=n)
    {
        fact*=i;
        i++;
    }
     cout<<fact<<endl;
    return 0;
}