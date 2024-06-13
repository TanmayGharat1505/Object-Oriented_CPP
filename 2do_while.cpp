#include<iostream>
using namespace std;
int main()
{
    int n1, n2, count;
    cout<<"Enter the Starting of Number of Range : ";
    cin>>n1;
    cout<<"Enter the Ending of Number of Range : ";
    cin>>n2;
    int i=1;
    do
    {
        count=0;
        i=1;
        do
        {
            if(n1%i==0)
            {
               count++;
            }
            i++;

        }while(i<=n1);

        if(count==2)
        {
          cout<<n1<<" ";
        }
         n1++;
   } while(n1<=n2);

} 