#include<iostream>
using namespace std;
class overloading2
{
	public:
		void multiplication(int a, int b)
		{
			cout<<a*b<<endl;
		}
		void multiplication(float a, float b)
		{
			cout<<a*b<<endl;
		}
};
main()
{
	overloading2 ob2;
	ob2.multiplication(20,10);
	ob2.multiplication(45.23f,12.23f);
}