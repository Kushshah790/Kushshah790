#include<iostream>
using namespace std;
class parent
{
	public:
		void Parent()
		{
			cout<<"\nparent";
		}
};
class Child1: public parent
{
	public:
		void child1()
		{
			cout<<"\n First Child";
		}
};
class Child2: public parent
{
	public:
		void child2()
		{
			cout<<"\n Second Child";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	
	c1.Parent();
	c1.child1();
	
	c2.Parent();
	c2.child2();
	

}