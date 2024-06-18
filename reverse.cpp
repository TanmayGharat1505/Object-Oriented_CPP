#include<iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter the string:- ";
    cin>>str;
    int length=str.length();
    string reverse;
    while(length >= 0)
    {
        reverse += str[length];
        length --;

    }
    cout<<"The Reverse of string is "<<reverse;
    return 0;
}