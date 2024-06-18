#include<iostream>
using namespace std;
void palin(string s1)
{
    int l=s1.length();
    for(int i=0; i<l; i++)
    {
        if(s1[i]!=s1[l-i-1])
        {
            cout<<"It is not a palindrome";
            break;
        }
        else
        {
            cout<<"It is a palindrome";
            break;
        }
    }
}
int  main()
{
    string s1;
    cout<<"Enter the string:- ";
    cin>>s1;
    palin(s1);
}