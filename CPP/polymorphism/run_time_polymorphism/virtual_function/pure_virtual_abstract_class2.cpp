// we can have a pointer or reference of abstract class

#include <iostream>
using namespace std;

class Base
{
	public:
		int x;
		virtual void func()=0;
};

class Derived: public Base
{
	public:
		void func()
		{
			cout<<"In derived class"<<endl;
		}
};

int main()
{
	Base *ptr = new Derived();
	ptr->func();
}
