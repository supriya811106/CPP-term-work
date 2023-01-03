    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    ***********************************/

   #include<iostream>
   using namespace std;
   int main()
   {
    int x,y,z,t;
    double R;
    cout<<"\t******INPUT******"<<endl;
    cout<<"\tENTER THE VALUE OF X, Y AND Z : ";
    cin>>x>>y>>z;
    cout<<"\t******OUTPUT******"<<endl;
    try
    {
        if(x-y==0)
        {
            t=x-y;
            throw(t);
        }
        else
        {
            R=(double)z/(x-y);
            cout<<"\tR = "<<R<<endl;
        }
    }
    catch(int t)
    {
        cout<<"\tException Caught"<<endl;
    }
    return 0;
   }