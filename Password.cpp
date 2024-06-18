#include<iostream>
#include<string>
using namespace std;
int main()
{
    string password;
    cout<<"Enter the Password:- ";
    cin>>password;
    while(password!="12345")
    {
       cout<<"Enter again: ";
       cin >> password;
    }
    cout<<password<<" is correct";

    return 0;

}
    