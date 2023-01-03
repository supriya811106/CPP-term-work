    /*
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    */

    #include<iostream>
    #include<string>
    using namespace std;
    class ConsDemo
    {
        public:
        void SumDemo(int, char);
        void SumDemo(int, int, char);
        void SumDemo(string, string);
        
    };
    void ConsDemo::SumDemo(int x, char c)
        {
            if(c=='p')
            cout<<x*x<<endl;
            else
            cout<<x*x*x<<endl;
        }
    void ConsDemo::SumDemo(int x, int y, char c)
        {
            if(c=='a')
            cout<<x+y<<endl;
            else
            cout<<(int)c<<endl;
        }
    void ConsDemo::SumDemo(string s1, string s2)
        {
            if(!s1.compare(s2))
            cout<<"Equal"<<endl;
            else
            cout<<"Not Equal"<<endl;
        }
    int main()
    {
        ConsDemo obj;
        obj.SumDemo(2,'p');
        obj.SumDemo(2,'j');
        obj.SumDemo(2,3,'a');
        obj.SumDemo(2,3,'b');
        obj.SumDemo("Supriya", "Suman");
        obj.SumDemo("Suman", "Suman");
        return 0;
    }
