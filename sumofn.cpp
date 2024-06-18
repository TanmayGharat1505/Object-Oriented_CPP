#include<iostream>
using namespace std;
int main()
{
    int n, sum=0,count= 1;
    cout<<"Enter th Number:- ";
    cin>>n;
    while(count<=n)
    {
        sum+=count;
        count++;
    }
    cout<<sum;
    return 0;
}