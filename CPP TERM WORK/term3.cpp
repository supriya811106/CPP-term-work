/**************************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
**************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j;
    string s[5];
    cout<<"******INPUT*******"<<endl;
    cout<<"ENTER FIVE WORDS : ";
    for(i=0;i<5;i++)
    {
        cin>>s[i];
    }
    cout<<"******OUTPUT*******"<<endl;
    cout<<"BEFORE REMOVING REPEATING ELEMENTS :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<endl;
    }
    for(i=0;i<5;i++)
    {
        for(j=1;j<s[i].size();j++)
        {
            if((s[i])[j]==(s[i])[j-1])
            {
                s[i].erase(j,1);
                j--;
            }
        }
    }
    cout<<"AFTER REMOVING REAPTING ELEMENTS :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
