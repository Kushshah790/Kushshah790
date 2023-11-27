#include<iostream>
using namespace std;
class grandfather
{
	public:
		void house()
		{
			cout<<"\n3 BHK House";
		}
};
class Father: public grandfather
{
	public:
		void land()
		{
			cout<<"\n100 Acres land";
		}
};
class mother
{
	public:
		void gold()
		{
			cout<<"\n25 kg gold";
		}
};
class son : public Father, public mother
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
	s1.land();
	s1.gold();
	s1.house();
	s1.car();
}