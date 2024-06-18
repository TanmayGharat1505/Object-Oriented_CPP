#include<iostream>
using namespace std;
int main()
{
    int n, i=2, count=0;
    cout<<"Enter the Number : ";
    cin>>n;
    while(i<=n/2)
    {
        if(i%n==0)
        {
            count++;
        }
        i++;
    }
    if(count == 0)
    {
        cout<<"It's a Prime";
    }
    else 
    {
        cout<<"It's a Composite";
    }
  return 0;
}