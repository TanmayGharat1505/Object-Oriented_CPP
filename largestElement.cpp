#include<iostream>
using namespace std;
int main()
{
    int range, j=0, i=0;
    cout<<"Enter the range:- ";
    cin>>range;
    int arr[range];
    while(j<range)
    {
        cin>>arr[j];
        j++;
    }
    //int arr[5]={3,5,7,2,9};
   // int i=0;
    int max=arr[0];
    while(i<5)
    {
       if(arr[i]>max)
       {
        max=arr[i];  
       }
       i++;
        
    }
    cout<<"The Largest Number is "<<max;
}