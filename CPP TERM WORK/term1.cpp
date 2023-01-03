/**************************************
NAME                : SUPRIYA SUMAN
CLASS ROLL NO       : 67
UNIVERSITY ROLL NO  : 2019266
SECTION             : B
***************************************/

#include<iostream>
using namespace std;
int main()
{
    int n,sum,product,result;
    cout<<"******INPUT******"<<endl;
    cout<<"Enter 2-digit No : ";
    cin>>n;
    sum=(n%10)+(n/10);
    product=(n%10)*(n/10);
    result=sum+product;
    cout<<"******OUTPUT******"<<endl;
    if(n==result)
    cout<<"Special 2-digit number"<<endl;
    else
    cout<<"Not a Special 2-digit number"<<endl;
    return 0;
}