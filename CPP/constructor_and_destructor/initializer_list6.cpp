/*  when constructor parameter name is same as data member

Then data member will be initialize by initializer list.

*/


#include <iostream>
using namespace std;

class A
{
	int i;
	public :
	A(int);
	void print()
	{
	cout<< " In constructor A : "<<i <<endl;
	}
};

A::A(int i):i(i) {} // initializer list can be used or this pointer can be used in this case 
/*
A::A(int i)
{
	this->i=i;
}
*/

int main()
{
	A a(10);
	a.print();
	return 0;
}