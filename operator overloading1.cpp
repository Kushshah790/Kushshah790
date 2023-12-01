#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y,z;
		void getdata(int a,int b, int c)
		{
			x = a;
			y = b;
			z = c;
			
		}
		void display()
		{
			cout<<"\nX = "<<x<<"\n Y = "<<y<<"\n Z="<<z;
			
		}
		void operator -()
		{
			x = -x;
			y = -y;
			z = -z;
		}
};
main()
{
	demo obj;
	obj.getdata(10,20,30);
	obj.display();
	-obj;
	obj.display();
}
