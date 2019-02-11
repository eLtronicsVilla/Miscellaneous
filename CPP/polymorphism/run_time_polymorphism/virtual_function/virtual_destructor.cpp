/*
   derived class object using a pointer to base class that has non-virtual destructor results in undefined behavior.
   To correct this situation , the base class should be defined with a virtual destructor.

 */
#include <iostream>
using namespace std;

class base {
	public:
		base()
		{
			cout<<"Constructing base\n";
		}
		~base()
		{
			cout<<" Destructing base\n";
		}
};

class derived: public base {
	public:
		derived()
		{
			cout<<"contructing derived\n";
		}
		~derived()
		{
			cout<<"destructing derived\n";
		}
};

int main()
{
	derived *d = new derived();
	base *b = d;
	delete d;
	return 0;
}
