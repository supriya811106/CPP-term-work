#include <iostream>
#include <vector>
#include<list>
using namespace std;
int main() 
{
    vector<int> v;
    list<int>l;
    int c, i;
    while (1) {
      cout<<"\t******INPUT******"<<endl;
      cout<<"1.Size"<<endl;
      cout<<"2.Insert Element"<<endl;
      cout<<"3.Delete Last Element "<<endl;
      cout<<"4.Sort "<<endl;
      cout<<"5.Display by Iterator"<<endl;
      cout<<"6.Clear"<<endl;
      cout<<"7.Exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"\t******OUTPUT******"<<endl;
            cout<<"Size of Vector: ";
            cout<<v.size()<<endl;
            cout<<"Size of list: ";
            cout<<l.size()<<endl;
         break;
         case 2:
            cout<<"Enter value to be inserted in vector: ";
            cin>>i;
            v.push_back(i);
            cout<<"Enter value to be inserted in list: ";
            cin>>i;
            l.push_back(i);
         break;
         case 3:
            cout<<"\t******OUTPUT******"<<endl;
            cout<<"Delete Last Element Inserted from vector:"<<endl;
            v.pop_back();
            cout<<"Delete Last Element Inserted from list:"<<endl;
            l.pop_back();
         break;
         case 4:
            cout<<"\t******OUTPUT******"<<endl;
            cout<<"Max size of the vector: ";
            cout<<v.max_size();
            cout<<"Max size of the list: ";
            cout<<l.max_size();
         break;
         case 5:
            cout<<"\t******OUTPUT******"<<endl;
            cout<<"Displaying Vector by Iterator: ";
            for (auto it = v.begin(); it != v.end(); it++) {
               cout<<*it<<" ";
            }
            cout<<endl;
            cout<<"tDisplaying list by Iterator: ";
            for (auto it = l.begin(); it != l.end(); it++) {
               cout<<*it<<" ";
            }
            cout<<endl;
         break;
         case 6:
            cout<<"\t******OUTPUT******"<<endl;
            v.clear();
            cout<<"Vector Cleared"<<endl;
            l.clear();
            cout<<"List Cleared"<<endl;
         break;
         case 7:
            exit(1);
            break;
         default:
            cout<<"\t******OUTPUT******"<<endl;
            cout<<"tWrong Choice"<<endl;
      }
   }
   return 0;
}
