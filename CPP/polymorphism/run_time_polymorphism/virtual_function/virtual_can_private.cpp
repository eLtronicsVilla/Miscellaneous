/*
   can virtual function be private in c++
   In c++ virtual function can be private and can be overridden by the derived class.

 */

#include <iostream>
using namespace std;

class Derived;

class Base
{
	private :
		virtual void fun()
		{
			cout<<"Base fun";
		}
//		friend int main();
};

class Derived: public Base
{
	public:
		void fun()
		{
			cout<<"Derived fun";
		}
};

int main()
{
	Base *ptr=new Derived;
	ptr->fun();
	return 0;
}
