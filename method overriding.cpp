#include<iostream>
using namespace std;
class Parent
{
	public:
		void mobile()
		{
			cout<<"Samsung s23 Ultra";
		}
};
class child : public Parent
{
	public:
		void mobile()
		{
			Parent:: mobile();  // scope resolution opreator
			cout<<"\nSamsung galaxy";
		}
};
main()
{
	child c1;
	c1.mobile();
}