/*
Virtual constructor:
Can we make a class constructor virtual in c++ to make the polymorphic objects.
It is meaningleass to the C++ compiler to create an object polymorphically.

The compiler must be aware of the class type to create the object .
What type of object to be create is a compile time decision from c++.
If we make constructor virtual compiler flags an error.
Except 'inline' , no other keyword is allowed in the declaration of constructor.

We would need to create a derived class object in a class hierarchy based on some input.
Object creation and object type are tightly coupled.

The objective of virtual constructor is to decouple object creation to object type.

How can we create required type of object at runtime.


*/

#include <iostream>
using namespace std;

class Base
{
public:
	Base() {}
	virtual ~Base() {}  // Ensures to invoke actual object destructor.
	// An interface 
	virtual void Display()=0;
};

class Derived1 : public Base
{
public:
	Derived1()
	{
		cout << "Derived1 created" <<endl;
	}
	~Derived1()
	{
		cout<<"Derived1 destroyed "<<endl;
	}
	void Display()
	{
		cout<<"action from derived1 "<<endl;
	}
};

class Derived2 : public Base
{
public:
	Derived2()
	{
		cout<<"Derived2 created"<<endl;
	}
	~Derived2()
	{
		cout<<"Derived2 destroyed"<<endl;
	}
	void Display()
	{
		cout<<"In derived2"<<endl;
	}

};

class User
{
public:
	// creates derived1 
	User() : pBase(0)
	{
		// what if Derived2 is required? add an if-else ladder.
		pBase = new Derived1();
	}
	
	~User()
	{
		if (pBase)
		{
			delete pBase;
			pBase = 0;
		}
	}
	// delegates to actual object 
	void Action()
	{
		pBase->Display();
	}
private:
	Base *pBase;
};

int main()
{
	User *user = new User();
	// need derived1 functionality only
	user->Action();
	delete user;
}