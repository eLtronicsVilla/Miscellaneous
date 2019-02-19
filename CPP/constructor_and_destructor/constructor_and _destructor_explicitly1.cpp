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

/*
class Base
{
public:
	Base()
	{
		cout<<"Base class constructor is created "<<endl;
	}
	~Base()
	{
		cout<<"base class destructor is created"<<endl;
	}
};

int main()
{
	Base(); // a constructor is called explicitely.
	Base b; // Base class object is created 
	b.~Base() ;// Base class destructor is called explicitly
	return 0;
}

*/

// When the constrcutor is called explicitly the compiler creates a nameless temporary object and it is immediately destroyed.
/*
Why c++ allow to call constrcutor explicitly ? do you think that shouldn't be?

Ans :
Temporary object of class type are useful.

When a destructor is invoked for an object , the object no longer exist.
the behaviour is undefined if the destrcutor is invoked for an object whose life time is ended.

If a destructor of an object is explicitely invoked and the block is subsequently left in a manner that would ordinarily invoke implicit destruction of the object., the behaviour is undefined.


Note : Never call destrcutor on local object .
Local object are automatically destroyed by compiler.when they go out of scope.

2. Constructor and destructor can be call by the member function of class.



class Test
{
public:
	Test()
	{
		cout<<"Constructor is called"<<endl;
	}
	~Test()
	{
		cout<<"destructor is called"<<endl;
	}
	void fun()
	{
		cout<<"In fun"<<endl;
		Test();
		this->Test::~Test();
	}
};


int main(int argc, char const *argv[])
{
	 
	Test t;
	t.fun(); 
	return 0;
}

*/

//3. Explicit call to destructor is only necessary when object is placed at particukar location in memory by using placement new.
// Destrcutor should not be called explicitly when the objct is dynamically allocated because delete operator automatically calls destructor.




Class Base{
	public:
		Base()
		{
			cout<<"In constructor"<<endl;
		}
		~Base()
		{
			cout<<"In destrcutor"<<endl;
		}
		friend void fun(Base b);

};

void fun(Base b)
{
	Base();
	b.~Base();
}


int main(int argc, char const *argv[])
{
	Base();
	Base t;
	t.fun();
	return 0;
}