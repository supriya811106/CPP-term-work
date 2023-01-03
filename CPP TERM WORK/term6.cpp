    /**********************************

    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B

    ***********************************/
   
#include<iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;
    public:
    Time()
    {
        hour=0;
        min=0;
        sec=0;
    }
    Time(int h, int m, int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void add(Time t1, Time t2)
    {
        sec=t1.sec+t2.sec;
        if(sec>=60)
        {
            min=t1.min+t2.min+sec/60;
            sec=sec%60;
        }
        if(min>=60)
        {
            hour=t1.hour+t2.hour+min/60;
            min=min%60;
        }
        if(hour>12)
        {
            hour=hour%12;
        }
    }
    void display()
    {
        cout<<hour<<" : "<<min<<" : "<<sec<<endl;
    }
};
int main()
{
    Time t1(11,59,59),t2(11,59,59),t;
    t.add(t1,t2);
    cout<<"*******INPUT*******"<<endl;
    cout<<"T1 = ";
    t1.display();
    cout<<"T1 = ";
    t2.display();
    cout<<"*******OUTPUT*******"<<endl;
    cout<<"T = T1 + T2 = ";
    t.display();
    return 0;
}

