#include<iostream>
using namespace std;
class demo
{
	public:
		demo()		//  constructor
		{
			cout<<"This is constructor";
		}
		~demo()   // destructor ~
		{
			cout<<"\nThis is destructor";
		}
};
main()
{
	demo d1;
}