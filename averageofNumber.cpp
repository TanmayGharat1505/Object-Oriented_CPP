#include<iostream>
using namespace std;
int main()
{
    int n, a, i=0, sum=0;
    while(n!=0)
    {
        cout<<"Enter the Number again (Until you enter 0)";
        cin>>n;
        sum+=n;
        i++;
    }
    i--;
    cout<<"The sum of All Number is "<<sum<<endl;
    cout<<"The Average is "<<sum/i<<endl;
    return 0;
}