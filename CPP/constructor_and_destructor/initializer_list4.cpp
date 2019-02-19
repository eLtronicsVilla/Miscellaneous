/*In example an object "a" of class "A" is datameber of class "B" and "A" doesn't have default constructor.
Initialization of member object which do not have default constructor.
In example an object "a" of class "A" is datameber of class "B" and "A" doesn't have default constructor.

Here initializer list must be used to initialize "a"


If class "A" have default and parameterized constructor , then initializer list is not required. 
In default constructor we can initialize the member variable but must to use parameterized constructor.

*/

#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A (int );
};

A::A(int arg)
{
	x = arg;
	cout<<"A constructor called , value of x: " << x <<endl;
}

class B
{
	A a;
public:
	B (int );
};

B::B(int arg2):a(arg2)     // initializer list must be used
{
	cout<<"B constructor called "<<endl;
}

int main()
{
	B obj3(30);
	return 0;
}

