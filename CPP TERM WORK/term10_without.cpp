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
    void operator -()
    {
        a=-a;
    }
    void operator ++()
    {
        ++a;
    }
    Test operator ++(int x)
    {
        a++;
    }
    Test operator --()
    {
        --a;
    }
    Test operator --(int x)
    {
        a--;
    }
    void display()
    {
        cout<<"\ta = "<<a<<endl;
    }
   };
   int main()
   {
    Test C(6);
    cout<<"\tBefore applying unary(-) operator : "<<endl;
    C.display();
    -C;
    cout<<"\tAfter applying unary(-) operator : "<<endl;
    C.display();
    cout<<"\tBefore applying Preincrement(++) : "<<endl;
    C.display();
    ++C;
    cout<<"\tAfter applying Preincrement(++) : "<<endl;
    C.display();
    cout<<"\tBefore applying Postincrement(++) : "<<endl;
    C.display();
    C++;
    cout<<"\tAfter applying Postincrement(++) : "<<endl;
    C.display();
    cout<<"\tBefore applying Predecrement(--) : "<<endl;
    C.display();
    --C;
    cout<<"\tAfter applying Predecrement(--) : "<<endl;
    C.display();
    cout<<"\tBefore applying Postderement(--) : "<<endl;
    C.display();
    C--;
    cout<<"\tAfter applying Postdecrement(--) : "<<endl;
    C.display();
    return 0;
   }