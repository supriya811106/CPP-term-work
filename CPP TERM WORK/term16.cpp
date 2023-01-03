    /**********************************
    NAME                : SUPRIYA SUMAN
    CLASS ROLL NO       : 67
    UNIVERSITY ROLL NO  : 2019266
    SECTION             : B
    ***********************************/

#include <iostream>
#include<string>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	string line;
	fout.open("supriya.txt");
	cout<<"\t******INPUT*******";
	while (fout) 
	{
		getline(cin, line);
		if (line == "-1")
			break;
		fout << line << endl;
	}
	fout.close();
	ifstream fin;
	fin.open("supriya.txt");
	cout<<"\t*******OUTPUT*******";
	while (getline(fin, line)) 
	{
		cout<< line << endl;
	}
	fin.close();
	return 0;
}
