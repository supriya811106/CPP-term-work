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
    protected:
    int roll_no;
    string name;
};
class Sports:virtual public Student
{
    protected:
    int sp1,sp2,sp3;
};
class Academics:virtual public Student
{
    protected:
    int m1,m2,m3,m4,m5;
};
class Result:public Sports,public Academics
{
    int total_marks;
    public:
    void Total()
    {   cout<<"\tEnter Student Name : ";
        getline(cin,name);
        cout<<"\tEnter Roll No : ";
        cin>>roll_no;
        cout<<"\tEnter Academic Marks in 5 subjects : ";
        cin>>m1>>m2>>m3>>m4>>m5;
        cout<<"\tEnter Sports Marks in 3 sports : ";
        cin>>sp1>>sp2>>sp3;
        total_marks=m1+m2+m3+m4+m5+sp1+sp2+sp3;
    }
    void display()
    {
        cout<<"\n\tStudent's Details :"<<endl;
        cout<<"\tStudent Name : "<<name<<endl;
        cout<<"\tStudent Roll No : "<<roll_no<<endl;
        cout<<"\tTotal Marks of student : "<<total_marks<<endl;
    }
};
int main()
{
    Result obj;
    cout<<"*******INPUT******"<<endl;
    obj.Total();
    cout<<"*******OUTPUT******"<<endl;
    obj.display();
    return 0;
}



