    /*  
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    */

   #include<iostream>
   using namespace std;
   class Complex
   {
        int a;
        int b;
        public:
        Complex(int x=0,int y=0)
        {
            a=x;
            b=y;
        }
        friend Complex operator +(Complex, Complex);
        void display()
        {
            if(b>=0)
                cout<<a<<"+i"<<b<<endl;
            else
                cout<<a<<"-i"<<-b<<endl;
        }
   };
   Complex operator +(Complex X, Complex Y)
   {
        Complex C;
        C.a=X.a+Y.a;
        C.b=X.b+Y.b;
        return C;
   }
   int main()
   {
    Complex C1(2,3),C2(1,-9),C3;
    C3=C1+C2;
    cout<<"*******INPUT*******"<<endl;
    cout<<"\tC1 = ";
    C1.display();
    cout<<"\tC2 = ";
    C2.display();
    cout<<"*******OUTPUT*******"<<endl;
    cout<<"\tC3 = C1 + C2 = ";
    C3.display();
    return 0;
   }