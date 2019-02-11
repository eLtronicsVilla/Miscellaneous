// assignment operator can be inherit in derived class.

#include <iostream>
using namespace std;

class A
{
	public:
		A & operator = (A &a) {
			cout<< "base class assignment operator called ";
			return *this;
		}
};

class B:public A {}; //derived class created from parent class A

int main()
{
	B a, b;
	a.A::operator=(b);   // assignment operator for derived class object with scope resolution 
	return 0;
}
