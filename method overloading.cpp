#include<iostream>
using namespace std;
class overloadingdemo
{
	public:
		void addition(int a, int b)
		{
			cout<<a+b<<endl;
		}
		void addition(float a, float b)
		{
			cout<<a+b<<endl;
		}
		void addition(int a, int b, int c)
		{
			cout<<a+b+c;
		}
};
main()
{
	overloadingdemo ob;
	ob.addition(30,40);
	ob.addition(85.85f,56.85f);
	ob.addition(87,85,56);
}