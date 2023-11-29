#include<iostream>
using namespace std;
class overloadingdemo3
{
	public:
		void rectangle(int area, int breadth)
		{
			cout<<"rectangle:"<<area*breadth<<endl;
		}
		void rectangle(float area, float breadth)
		{
			cout<<"rectangle:"<<area*breadth<<endl;
		}
};
main()
{
	overloadingdemo3 ob3;
	ob3.rectangle(20,52);
	ob3.rectangle(67.34f,90.43f);
}