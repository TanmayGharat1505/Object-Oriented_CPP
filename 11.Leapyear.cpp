#include<iostream>
using namespace std;
void year(int n)
{
    if((n%4==0) && (n%100!=0) || (n%400==0))
    {
        cout<<n<<" is a Leap Year";
    }
    else
    {
        cout<<n<<" is not a leap year";
    }
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    year(n);
    return 0;
}