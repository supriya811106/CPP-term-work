/**************************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
**************************************/

#include<iostream>
#include<limits.h>
using namespace std;
void composite(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"A Composite number"<<endl;
            return;
        }
    }
     cout<<"Not a Composite number"<<endl;
}

void smallest(int n)
{
    int min=INT_MAX;
    while(n!=0)
    {
        int r=n%10;
        if(r<min)
            min=r;
        n=n/10;
    }
    cout<<"Smallest digit is "<<min<<endl;
}
int main()
{
    int n,ch;
    cout<<"*******INPUT******"<<endl;
    cout<<"\n1 - CHECK COMPOSITE NO\n2 - FIND SMALLEST DIGIT"<<endl;
    cout<<"ENTER A CHOICE : ";
    cin>>ch;
    cout<<"ENTER THE NO : ";
    cin>>n;
    cout<<"*******OUTPUT******"<<endl;
    switch(ch)
    {
        case 1:
        composite(n);
        break;
        case 2:
        smallest(n);
        break;
        default:
        cout<<"WRONG CHOICE"<<endl;
        break;
    }
    
    return 0;
} 