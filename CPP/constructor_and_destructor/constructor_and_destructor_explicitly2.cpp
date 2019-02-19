/*
Is it possible to call constructor and destructor explicitly?

constructor is a special member function that is auto called by compiler,
when object is created and destructor is also special member function that is also implicitly called by compiler when object goes out of scope.

They are also called when dynamically allocated object is cretaed and destroyed.
"new" operator allocates storage and calls constructor , delete operator cals destructor and free the memory allocated by new.


Is is possible to call constructor and destructor explicitly?

Yes , It is possible to call special member function explicitly.

*/

// example program.

#include <iostream>
using namespace std;

class Base
{
	Base()
	{
		cout<<"Base class constructor is created "<<endl;
	}
	~Base()
	{
		cout<<"base class destructor is created"<<endl;
	}
}

int main()
{
	Base(); // a constructor is called explicitely.
	Base b; // Base class object is created 
	b.~Base() ;// Base class destructor is called explicitly
}