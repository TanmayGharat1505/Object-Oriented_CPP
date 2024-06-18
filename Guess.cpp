#include<iostream>
#include<string>
using namespace std;
int main()
{
    string SecretNo;
    cout<<"Enter the Password:- ";
    cin>>SecretNo;
    while(SecretNo!="54321")
    {
       cout<<"Enter again: ";
       cin>>SecretNo;
    }
    cout<<SecretNo<<" WoW!!! , You Guess Correct Number";
    return 0;
}
    