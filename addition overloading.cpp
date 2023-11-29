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
};
main()
{
	overloadingdemo ob;
	ob.addition(10,20);
	ob.addition(50.56f,85.56f);
}