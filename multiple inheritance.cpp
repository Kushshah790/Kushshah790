#include<iostream>
using namespace std;
class papa
{
	public:
		void house()
		{
			cout<<"3 BHK House";
		}
};
class kaka
{
	public:
		void shop()
		{
			cout<<"\nKirana shop";
		}
};
class son : public papa, public kaka
{
	public:
		void car()
		{
			cout<<"\nBMW car";
		}
};
main()
{
	son s1;
	s1.house();
	s1.shop();
	s1.car();
}