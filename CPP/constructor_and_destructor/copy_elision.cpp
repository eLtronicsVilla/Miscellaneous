/* copy elision or copy omission 
 It is a compiler optimization technique that avoids unnecessary copying of object.
 Now days every compiler usages it. 


*/

#include <iostream>
using namespace std;

class B
{
public:
	B(const char *str = "\0") // default constructor 
	{
		cout<<"constructor called"<<endl;
	}
	B(const B &b)  // copy constructor 
	{
		cout<<"copy constructor called"<<endl;
	}
};

int main()
{
	//B obj = "object created";
	B obj("object created");
	return 0;
}


/* output is constructor called.
Why copy constructor is not called ?
When the objet is being constructed , one argument constructor is used to convert 
"object created" to a temporary object & that temporary object is copied to the object "ob" .
It can be break down:
B obj = B("object created")

Avoid copy initialization and do direct initialization.
B obj("object created")
*/