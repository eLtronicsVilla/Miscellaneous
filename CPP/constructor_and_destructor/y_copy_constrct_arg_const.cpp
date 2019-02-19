/* why copy constructor argument should be constant in c++.

When we create a copy constructor we pass the created object reference as const argument to copy constructor.Why?

We do this to avoid that object are not accidently modified.

*/

#include <iostream>
using namespace std;

class Test 
{
	// class data member
	public:
		Test(Test &t) {} // copy constructor
		Test()

Test fun()
{
	cout<<"In function"<<endl;
	Test t;
	return t;
}

int main()
{
	Test t1;
	Test t2 = fun(); // to pass object as copy constructor.
}


//  error: invalid initialization of non-const reference of type ‘Test&’ from an rvalue of type ‘Test’
// We have to add 'const' in copy constructor
// change copy constructor : Test (const Test &t)
// or you can change :
//  Test t2 
// t2 = fun()
// The function return by value so compiler create a temporary object 
// which is copied to t2 using copy constructor in the original program.