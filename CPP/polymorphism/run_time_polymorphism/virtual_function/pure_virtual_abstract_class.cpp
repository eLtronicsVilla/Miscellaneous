/*

   sometimes all the functions cannot be provided in a base class because we do'nt know the implementation.Such a class is called abstract class.

Ex: If shape be a base class , we cannot provide draw() function implementation in base class but in derived class we provide draw function implementation.

A pure virtaual function( or abstract function) : is a virtual function for which we don't have implementation,we only declare it.
A pure virtual function is declared by assigning 0 in declaration. 

A pure virtual function is implemented by classes which are derived from a abstract class.

We cannot create an object of pure virtual function 

*/

#include <iostream>
using namespace std;

class Base
{
	int x;
	public:
	virtual void fun() = 0;
	int getX()
	{
		return x; 
	}
};

class Derived: public Base
{
	int y;
	public:
	void fun()
	{
		cout << "fun() called";
	}
};


int main()
{
	Derived d;
	d.fun();
	return 0;
}
