    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    ***********************************/
#include<iostream>
using namespace std;
class Temperature
{
    protected:
    float temp;
    public:
    void setTempData(float t)
    {
        temp=t;
    }
    virtual void changetemp()=0;
};
class Fahrenheit:public Temperature
{
    float ctemp;
    public:
    void changetemp()
    {
        ctemp=((float)5/9)*(temp-32);
        cout<<ctemp<<endl;
    }
};
class Celsius:public Temperature
{
    float ftemp;
    public:
    void changetemp()
    {
        ftemp=((float)9/5)*temp+32;
        cout<<ftemp<<endl;
    }
};
int main()
{
    Fahrenheit T1;
    Celsius T2;
    float t;
    printf("\t******INPUT******\n");
    cout<<"\tENTER THE TEMPERATURE : ";
    cin>>t;
    T1.setTempData(t);
    T2.setTempData(t);
    printf("\t******OUTPUT******\n");
    cout<<"\tTEMPERATURE IN CELCIUS : ";
    T1.changetemp();
    cout<<"\tTEMPERATURE IN FAHRENHEIT : ";
    T2.changetemp();
    return 0;
}
