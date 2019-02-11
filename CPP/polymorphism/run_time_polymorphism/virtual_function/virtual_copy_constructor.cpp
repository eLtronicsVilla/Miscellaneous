/*

   Is it possible to create an object without knowing it's exact class type.
   virtual copy constructor address this question.
   Sometime we may need to construct an object from another existing object.
   The copy constructor does the same.
   Initial state of new object will be based on other existing object state.
   The compiler place call to copy constructor when an object being initiated from another object.

 */

#include <iostream>
using namespace std;

class Base
{
	public:
		//
};
class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"Derived created" <<endl;
		}
		Derived(const Derived &rhs)
		{
			cout<<"Derived created by deep copy"<<endl;
		}
		~Derived()
		{
			cout<<"Derived destroyed"<<endl;
		}
};

int main()
{
	Derived s1;

	Derived s2 = s1;  // compiler invokes "copy constructor Type of s1 and s2 are concrete 
return 0;
}
