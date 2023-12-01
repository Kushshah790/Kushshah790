#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y,z;
		void getdata(int a,int b, int c);
		{
			x = a;
			y = b;
			z = c;
		};
		void display()
		{
			cout<<"\nX = "<<x<<"\nY = "<<y<<"\nZ = "<<z;
		}
		void operator -()
		{
			x = -a;
			y = -y;
			z = -z;
		}
};
main()
{
	demo obj;
	obj.getdata(40,50,60);
	obj.display();
	-obj;
	obj.display();
}