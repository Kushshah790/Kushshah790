#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file1;
	file1.open("test.txt",ios::app);
	
	string data;
	
	cout<<"Enter data:";
	cin>>data;
	
	file1<<data;
	file1.close();
	
	ifstream file2;
	file2.open("test.txt");
	file2>>data;
	cout<<data;
}