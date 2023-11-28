#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		int marks[5];    // Array within class
		int i;
		void input()     // member function
		{
			cout<<"Enter the id:";
			cin>>id;
			cout<<"Enter the name:";
			cin>>name;
			for(i=0;i<5;i++)
			{
				cout<<"Enter your marks:";
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"\n Your ID is:"<<id;
			cout<<"\n Your name is:"<<name;
			for(i=0;i<5;i++)
			{
				cout<<"\nMarks = "<<marks[i];
			}
		}
};
main()
{
	int i;
	student s1[3];		// Array of objects
	for(i=0;i<3;i++)
	{
			s1[i].input();
	}
	for(i=0;i<3;i++)
	{
			s1[i].display();
	}
	
}