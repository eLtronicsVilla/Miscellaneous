/*
Default Constructor:
A constructoe without any argument or with default value of every argument, is said to be default constructor.

Compiler will implicitly declare a default constructor.
This is happen to do certain initialization of class internals.

*/

#include <iostream>
using namespace std;

class Base 
{
public:
	// compiler will declare a default constructor	
};

class A 
{
public:
	// User defined constructor 
	A()
	{
		cout<<" In A constructor"<<endl;
	}
	// uninitialize data 
	int a;
};

class B : public A
{
	// compiler defines default constructor of B 
	// compiler inserts stub to call A's constructor 
	// compiler would not initialize any data of A class
	//	cout <<"B constructor"<<endl;
};


class C : public A 
{
	public:
		C()
		{
			// User defined default constructor of C
			// compiler insert to call constructor A
			cout<<" C constructor "<<endl;
			// compiler would not initialize any data

		}	
};

class D
{
public:
	D()
	{
		// user defined default constructor of D
		// a- constructor to be called, compiler inserts.
		cout<<"D constructor" <<endl;
		// compiler would not initialize any data
	}
private:
	A a;
		
};

int main()
{
	Base base;
	B b;
	C c;
	D d;
	return 0;
}