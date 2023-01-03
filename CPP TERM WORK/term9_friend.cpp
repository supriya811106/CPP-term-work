    /*
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    */

   #include<iostream>
   using namespace std;
   class Test
   {
    int a;
    public:
    Test(int x=0)
    {
        a=x;
    }
    friend void operator -(Test &);
    friend void operator ++(Test &);
    friend void operator --(Test &);
    friend void operator ++(Test &,int);
    friend void operator --(Test &,int);
    void display()
    {
        cout<<"a = "<<a<<endl;
    }
   };
   void operator -(Test &C)
   {
        C.a=-C.a;
   }
   void operator ++(Test &C)
   {
        ++C.a;
   }
   void operator ++(Test &C, int x)
   {
        C.a++;
   }
   void operator --(Test &C)
   {
        --C.a;
   }
   void operator --(Test &C, int x)
   {
        C.a--;
   }
   int main()
   {
    Test C(6);
    cout<<"Before applying unary(-) operator : "<<endl;
    C.display();
    -C;
    cout<<"After applying unary(-) operator : "<<endl;
    C.display();
    cout<<"Before applying Preincrement(++) : "<<endl;
    C.display();
    ++C;
    cout<<"After applying Preincrement(++) : "<<endl;
    C.display();
    cout<<"Before applying Postincrement(++) : "<<endl;
    C.display();
    C++;
    cout<<"After applying Postincrement(++) : "<<endl;
    C.display();
    cout<<"Before applying Predecrement(--) : "<<endl;
    C.display();
    --C;
    cout<<"After applying Predecrement(--) : "<<endl;
    C.display();
    cout<<"Before applying Postderement(--) : "<<endl;
    C.display();
    C--;
    cout<<"After applying Postdecrement(--) : "<<endl;
    C.display();
    return 0;
   }