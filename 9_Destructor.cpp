#include<iostream>
using namespace std;
class HelloWorld 
{
    public:
    //Constructor
    HelloWorld()
    {
        cout<<"Constructor is called "<<endl;
    }
    //Destructor
    ~HelloWorld()
    {
        cout<<"Destructor is called "<<endl;
    }
    //Function Member
    void display()
    {
        cout<<"Hello World!"<<endl;
    }
};
//Main
int main()
{
    HelloWorld obj;
    obj.display();
}