#include<iostream>
using namespace std;
int factorial(int num)
{
   if(num>0)
   {
    return num*factorial(num-1);
   }
   else return 1;
}
int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    cout<<"Factorial of "<<number<<" is: "<<factorial(number);
    return 0;
}    