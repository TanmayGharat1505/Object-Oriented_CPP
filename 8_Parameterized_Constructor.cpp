#include<iostream>
using namespace std;
//base class
class wall
{
    private :
    double length;
    double height;
    public :
    wall(double len, double hgt)
    {
        length=len;
        height=hgt;
    }
    double calculateArea()
    {
        return length*height;
    }
};
int main()
{
    wall wall1(10.5,8.6);
    wall wall2(12.5,9.5);
    cout<<"Area of Wall is "<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall is "<<wall2.calculateArea();
    return 0;
}

