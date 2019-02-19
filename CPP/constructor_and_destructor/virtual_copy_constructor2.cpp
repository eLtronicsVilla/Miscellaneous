/*
Virtual copy constructor 


*/

#include <iostream>
usig namespace std;

class Base
{
public:
	Base() {}
	Virtual ~Base() {}
	virtual void changeAttributes() = 0;
	// the virtual constructor
	static Base *Create(int id);
	// the vi
	virtual Base *Clone() = 0;
};

class Derived1: public Base
{
public:
	Derived1()
	{
		cout<<"Derived1 created "<<endl;
	}
	Derived1(const Derived1 &rhs)
	{
		cout <<"Derived1 created by deep copy"<<endl;
	}

	~Derived1()
	{
		cout<<"Derived1 destroyed"<<endl;

	}
	void changeAttributes()
	{
		cout<<" Derived1 changeAttributes "<<endl;
	}
	Base *Clone()
	{
		return new Derived1(*this);
	}
};

class Derived2:public Base
{
public:
	Derived2()
	{
		cout<<"Derived2 is created"<<endl;
	}
	Derived2(const Derived2 &rhs)
	{
		cout<<"Derived2 is created by deep copy "<<endl;
	}
	~Derived2()
	{
		cout<<"In derived2 destroyed"<<endl;
	}
	void changeAttributes()
	{
		cout<<" Derived2 changeAttributes "<<endl;
	}
	Base *Clone()
	{
		return new Derived2(*this);
	}

};

class Derived3:public Base
{
public:
	Derived3()
	{
		cout<<"Derived3 is created"<<endl;
	}
	Derived3(const Derived3 &rhs)
	{
		cout<<"Derived3 is created by deep copy "<<endl;
	}
	~Derived3()
	{
		cout<<"In derived3 destroyed"<<endl;
	}
	void changeAttributes()
	{
		cout<<" Derived3 changeAttributes "<<endl;
	}
	Base *Clone()
	{
		return new Derived3(*this);
	}

};


Base *Base::Create (int id)
{
	if (id == 1)
	{
		return new Derived1;
	}
	if (id ==2)
	{
		return new Derived2;
	}
	if (id == 3)
	{
		return new Derived3;
	}
};
