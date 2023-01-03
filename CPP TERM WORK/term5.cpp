    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    **********************************/

#include<iostream>
using namespace std;
class Tollbooth
{
    int cars;
    double money;
    public:
    Tollbooth()
    {
        cars=0;
        money=0;
    }
    void payingCar()
    {
        cars++;
        money+=0.5;
    }
    void nonPayCar()
    {
        cars++;
    }
    void display()
    {
        cout<<"Total Cars: "<<cars<<endl;
        cout<<"Total Money: "<<money<<endl;
    }
};
int main()
{
    char ch;
    Tollbooth tb;
    cout<<"*******INPUT*******"<<endl;
    do
    {
        cout<<"A - Paying Car\nB - Non paying Car\nE - Display"<<endl;
        cout<<"Push a key: ";
        cin>>ch;
        switch(ch)
        {
            case 'A':
            tb.payingCar();
            break;
            case 'B':
            tb.nonPayCar();
            break;
            case 'E':
            cout<<"*******OUTPUT*******"<<endl;
            tb.display();
            exit(0);
            default:
            exit(0);
        }
    }while(1);
    
    return 0;
}