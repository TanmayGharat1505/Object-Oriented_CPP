// program to read and print student information for BTech admission
#include <iostream>
using namespace std;

class Student
{
public:
    string name, address, email, phone;
    bool eligible=true;
    int date,month,year; 
    double sum=0,avg;
};

class Detail : public Student
{
public:
    void setName()
    {
        cout << "Enter name: ";
        getline(cin, name);
    }
    void getName()
    {
        cout<<endl<<"Name: "<<name<<endl;
    }
    void setDob()
    {
        cout << "Enter Date of Birth(DD): ";
        cin >> date;
        cout<<"Enter Month of Birth(MM): ";
        cin>>month;
        cout<<"Enter Year of Birth(YYYY): ";
        cin>>year;
    }
    void getDob()
    {
        cout<<"Date of Birth: "<<date<<"/"<<month<<"/"<<year<<endl;
    }
    void setAddress()
    {
        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);
    }
    void getAddress()
    {
        cout<<"Address: "<<address<<endl;
    }
    void setEmail()
    {
        cout << "Enter Email: ";
        getline(cin, email);
    }
    void getEmail()
    {
        cout<<"Email: "<<email<<endl;
    }
    public:
    void setPhone()
    {
        start:
        cout << "Enter Phone Number: ";
        cin >> phone;
        if (phone.length()>10)
        {
            cout<<"Invalid phone number."<<endl;
            goto start;
        }
    }
    void getPhone()
    {
        cout<<"Phone Number: "<<phone<<endl;
    }
    void setPercentage()
    {
        double percentage[5];
        string exam[5]={"JEE","MHTCET","BOARDS","CEO/CTO","OTHER"};
        for (int i=0;i<5;i++)
        {
            cout << "Enter Percentage of "<<exam[i]<<" Exam: ";
            cin >> percentage[i];
            sum+=percentage[i];
        }
        for (int i=0;i<5;i++)
        {
            if (percentage[i]<60)
            {
                eligible=false;
            }
        }
        avg=sum/5;
    }
    void getPercentage()
    {
        if (!eligible)
        {
            cout<<"Sorry, you are not eligible."<<endl;
        }
        else if (avg < 60)
        {
            cout << "You are ineligible.";
        }
        else if (avg>=60 && avg<70)
        {
            cout<<"You are eligible for BTech Information Technology."<<endl;
        }
        else if (avg>=70 && avg<80)
        {
            cout<<"You are eligible for BTech Electronics & Telecommunications."<<endl;
        }
        else if (avg>=80 && avg<90)
        {
            cout<<"You are eligible for BTech Computer Engineering."<<endl;
        }
        else
        {
            cout<<"You are eligible for BTech Artifical Intelligence and Data Science."<<endl;
        }
    }
};

int main()
{
    Detail s1;
    s1.setName();
    s1.setDob();
    s1.setAddress();
    s1.setEmail();
    s1.setPhone();
    s1.setPercentage();
    s1.getName();
    s1.getDob();
    s1.getAddress();
    s1.getEmail();
    s1.getPhone();
    s1.getPercentage();
    return 0;
}