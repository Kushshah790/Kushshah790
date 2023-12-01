#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"Welcome to the virtual class";
		}
};
class B : virtual public A
{
	
};
class c : virtual public A
{
	
};
class D : public B,public c
{
	
};
main()
{
	D obj;
	obj.display();
}