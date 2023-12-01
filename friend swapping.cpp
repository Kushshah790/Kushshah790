#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		int x;
	protected:
		int y;
	private:
		int z;
		
		friend void fun();
		cout<<"Enter the value of x:";
		cin>>a;
		cout<<"Enter the value of y:";
		cout<<"\nEnter the value of z:";
		cin>>b;
		
		x=x+y;;
		y=x-y;
		x=x-y;
		cout<<"After the swapping a=%d and b=%d",a,b;
};
void fun()
{
	A obj;
	A.x=10;
	A.y=20;
	A.z=30;
}

main()
{
	fun();
}