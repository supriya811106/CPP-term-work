    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    ***********************************/

#include<iostream>
#include<string>
using namespace std;
class UserTwo;
class UserOne
{
string Name;
string FatherName;
string MotherName;
char gender;
public:
void InputInfo()
{
    cout<<"\tEnter Person Name: ";
    getline(cin,Name);
    cout<<"\tEnter Father Name: ";
    getline(cin,FatherName);
    cout<<"\tEnter Mother Name: ";
    getline(cin,MotherName);
    cout<<"\tEnter Person gender: ";
    cin>>gender;
}
friend void Compare(UserOne, UserTwo);
};
class UserTwo
{
string Name;
string FatherName;
string MotherName;
char gender;
public:
void InputInfo()
{
    getchar();
    cout<<"\tEnter Person Name: ";
    getline(cin,Name);
    cout<<"\tEnter Father Name: ";
    getline(cin,FatherName);
    cout<<"\tEnter Mother Name: ";
    getline(cin,MotherName);
    cout<<"\tEnter Person gender: ";
    cin>>gender;
}
friend void Compare(UserOne, UserTwo);
};
void Compare(UserOne X, UserTwo Y)
{
    if(X.FatherName==Y.FatherName && X.MotherName==Y.MotherName)
    {
        cout<<"\tBelongs to same Family"<<endl;
        if(X.gender==Y.gender && X.gender=='M')
            cout<<"\tWe are Brothers"<<endl;
        else if(X.gender==Y.gender && X.gender=='F')
            cout<<"\tWe are Sisters"<<endl;
        else 
         cout<<"\tWe are Brothers and Sisters"<<endl;
    }
    else
    cout<<"\tBelongs to different Family"<<endl;
}
int main()
{
    UserOne Person1;
    UserTwo Person2;
    cout<<"\t\t******INPUT******"<<endl;
    Person1.InputInfo();
    Person2.InputInfo();
    cout<<"\t\t******OUTPUT******"<<endl;
    Compare(Person1, Person2);
    return 0;
}
