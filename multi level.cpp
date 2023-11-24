#include<iostream>
using namespace std;
class Grandfather
{
	public:
		void Land()
		{
			cout<<"100 Acres land";
		}
};
class Father : public Grandfather
{
	public:
		void House()
		{
			cout<<"\n4 BHK House";
		}
};
class Son : public Father
{
	public:
		void Car()
		{
			cout<<"\nAudi car";
		}
};
main()
{
	Son s;
	s.Land();
	s.House();
	s.Car();
}