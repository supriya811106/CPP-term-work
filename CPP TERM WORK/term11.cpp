    /***********************************
    
    NAME                : SUPRIYA SUMAN
    CLASS ROLL node     : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B 
    
    ***********************************/
#include<iostream>
#include<string>
using namespace std;
class Student
{
    int age;
    string name;
    long int enroll_no;
    int marks;
    public:
    void getinfo()
    {
        cout<<"Enter Student Name : ";
        getline(cin,name);
        cout<<"Enter the age : ";
        cin>>age;
        cout<<"Enter Enrollment No : ";
        cin>>enroll_no;
        cout<<"Enter Total Marks : ";
        cin>>marks;
    } 
    void display()
    {
        cout<<"Student Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Enrollment No : "<<enroll_no<<endl;
        cout<<"Total Marks : "<<marks<<endl;
    }
};
class Faculty
{
    int age;
    string facultyname;
    long int facultycode;
    int salary;
    string deptt;
    int experience;
    string gender;
    public:
    void getinfo()
    {
        getchar();
        cout<<"Enter Faculty Name : ";
        getline(cin,facultyname);
        cout<<"Enter the age : ";
        cin>>age;
        cout<<"Enter Faculty Code : ";
        cin>>facultycode;
        getchar();
        cout<<"Enter Department : ";
        getline(cin,deptt);
        cout<<"Enter Experience(In Years) : ";
        cin>>experience;
        cout<<"Enter Gender : ";
        cin>>gender;
    } 
    void display()
    {
        cout<<"Faculty Name : "<<facultyname<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Faculty Code : "<<facultycode<<endl;
        cout<<"Department : "<<deptt<<endl;
        cout<<"Experience (In Years) : "<<experience<<endl;
        cout<<"Enter Gender : "<<gender<<endl;
    }
};
class Person:public Student,public Faculty
{
;
};
int main()
{
    Person obj;
    cout<<"*******INPUT*******"<<endl;
    obj.Student::getinfo();
    obj.Faculty::getinfo();
    cout<<"*******OUTPUT*******"<<endl;
    cout<<"Student's Details :"<<endl;
    obj.Student::display();
    cout<<"Faculty's Details :"<<endl;
    obj.Faculty::display();
    return 0;
}

