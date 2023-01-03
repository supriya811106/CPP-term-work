    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    **********************************/

    #include<iostream>
    #include<string>
    using namespace std;
    class Flight
    {
        int flight_no;
        string destination;
        float distance;
        float fuel;
        void CALFUEL()
        {
            if(distance<=1000)
                fuel=500;
            else if(distance>1000 && distance<=2000)
                fuel=1100;
            else if(distance>2000)
                fuel=2200;
        }
        public:
        void FEEDINFO()
        {
            cout<<"ENTER FLIGHT NO : ";
            cin>>flight_no;
            getchar();
            cout<<"ENTER THE DESTINATION : ";
            getline(cin,destination);
            cout<<"ENTER THE DISTANCE : ";
            cin>>distance;
            CALFUEL();
        }
        void SHOWINFO()
        {
            cout<<"\nFLIGHT NO : "<<flight_no<<endl;
            cout<<"DESTINATION : "<<destination<<endl;
            cout<<"DISTANCE : "<<distance<<endl;
            cout<<"FUEL : "<<fuel<<endl;
        }
    };
    int main()
    {
        Flight fl;
        cout<<"\t******INPUT******"<<endl;
        fl.FEEDINFO();
        cout<<"\t******OUTPUT******"<<endl;
        fl.SHOWINFO();
        return 0;
    }