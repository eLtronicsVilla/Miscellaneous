/*
virtual copy constructor in C++.

Is it possible to create an object without knowing it's type.
Sometimes we need to construct an object from another exsting object.
Copy constrcutor does the same.
Compiler need concrete type when invoke copy contrcutor to create an object from the other existing object.

*/


#include <iostream>
using namespace std;

class Base 
{
public:

};

class Derived: public Base
{
public:
	Derived()
	{
		cout<<" In Derived class"<<endl;
	}
	Derived (const Derived &rhs)
	{
		cout<<" Derived created by deep copy"<<endl;
	}
	~Derived()
	{
		cout<<"In derived destructor"<<endl;
	}
};

int main()
{
	Derived s1;
	Derived s2 =s1; // compiler invoke copy constructor 
	// how can we create derived1 and derived2 object.
	return 0;
}


/* what if we cannot decide from which type of object , the copy constructor to be made?
virtual constructor create an object of class hierarchy at runtime based on some input.
when we want to create a copy constrcutor from a virtually created object then we cannot use usual copy constructor.
we need a spacial cloning function that can duplicate the object at run time.

*/