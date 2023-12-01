#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T t=a;
	  a=b;
	  b=t;
}
main()
{
	char a='A', b='B';
	int x=10,y=20;
	cout<<"Before Swap A ="<<a<<" | B ="<<b;
	swapping(a,b);
	cout<<"\nAfter Swap A ="<<a<<" | B ="<<b;
	
	cout<<"\nBefore Swap X = "<<x<<"| Y ="<<y;
	swapping(x,y);
	cout<<"\nAfter Swap X = "<<x<<"| Y ="<<y;
}