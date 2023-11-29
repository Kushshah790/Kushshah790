#include<iostream>
using namespace std;
class overloadingdemo1
{
	public:
		void subtraction(int a, int b)
		{
			cout<<a-b<<endl;
		}
		void subtraction(float a, float b)
		{
			cout<<a-b<<endl;
		}
};
main()
{
	overloadingdemo1 ob1;
	ob1.subtraction(45,35);
	ob1.subtraction(54.52f,23.25f);
}