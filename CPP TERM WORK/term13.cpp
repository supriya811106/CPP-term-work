    /***********************************
    
    NAME                : SUPRIYA SUMAN
    CLASS ROLL node     : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B 
    *************************************/
    
#include<iostream>
#include<string>
using namespace std;
class shape
{
    protected:
    double height;
    double base;
    public:
    void get_data()
    {
       cout<<"\tEnter the height : ";
       cin>>height;
       cout<<"\tEnter the base : ";
       cin>>base;
    }
    virtual void display_area()=0;
};
class rectangle:public shape
{
    public:
    void display_area()
    {
        cout<<"\tArea of Rectangle : "<<height*base<<endl;
    }
};
class triangle:public shape
{
    public:
    void display_area()
    {
        cout<<"\tArea of triangle : "<<((double)1/2)*height*base<<endl;
    }
};
int main()
{
    rectangle ob1;
    triangle ob2;
    cout<<"\t******INPUT******"<<endl;
    cout<<"\tEnter the Details of Rectangle : \n";
    ob1.get_data();
    cout<<"\tEnter the Details of triangle : \n";
    ob2.get_data();
    cout<<"\t******OUTPUT******"<<endl;
    ob1.display_area();
    ob2.display_area();
    return 0;
}

