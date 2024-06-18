#include<iostream>
#include<iostream>
using namespace std;
string Reverse(string a)
{
   string reverse;
   for(int i=a.length()-1; i>=0; i--)
   {
    reverse+= a[i];
   }
   cout<<reverse;
   return reverse;
}
int main()
{
    string a;
    cout<<"Enter the String : ";
    cin>>a;
     Reverse(a);
    return 0;
}