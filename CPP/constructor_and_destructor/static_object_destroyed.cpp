/*
When are static object detroyed in cpp.
Static keyword can be applied to local variable , function,class, data member and object in cpp.
static local variable retain their value between function call and initialize only once.
Static function can be directly called using scope resolution operator preceded by class name.
C++ also support static object.

Test t;  // stack based object
static Test t1;  //static object
static object are initialized only once and live untill the program terminate.
static object are allocated storage in static storage area.
Static object is destroyed at the termination of the program.
C++ support both local static object and global static object.

*/

// Use of local static object.

#include <iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		cout<<"In constructor"<<endl;
	}
	~Test()
	{
		cout<<"Destructor is executed"<<endl;
	}
};

void myfunc()
{
	static Test obj;
	// obj is still not destroyed bcoz it is static.
}

int main()
{
	cout<<"main started"<<endl;
	myfunc(); //destrutor will not be called here.
	cout<<"main() terminates"<<endl;
	return 0;
}