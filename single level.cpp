#include<iostream>
using namespace std;
class Father
{
	public:
		void house()
		{
			cout<<"3 BHK House";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"\nMercedez car";
		}
};
main()
{
	Son sobj;
	sobj.house();
	sobj.car();
}