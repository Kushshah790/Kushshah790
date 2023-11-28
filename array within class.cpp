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
	student s1;
	s1.input();
	s1.display();
	
	
}