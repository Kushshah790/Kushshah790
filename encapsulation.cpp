#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;
		void setID(int id)
		{
			this->id = id;
		}
		int getID()
		{
			return this->id;
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return this->name;
		}
		void setSubject(string subject)
		{
			this->subject = subject;
		}
		string getSubject()
		{
			return this->subject;
		}
};
main()
{
	student s1;
	s1.setID(1);
	cout<<s1.getID();
	
	s1.setName("\nKush");
	cout<<s1.getName();
	
	s1.setSubject("\nenglish");
	cout<<s1.getSubject();

}