/*
For initialization of base class member.
Parameterized constructor of base class can only be called using initializer list.

*/

#include <iostream>
using namespace std;

class Base 
{
	int i;
public:
	Base(int);
};

Base::Base(int arg)
{
	i=arg;
	cout<<"A constructor called , value = "<<i<<endl;
}

class derived : Base 
{
public:
	derived(int);
};

derived ::derived(int x):Base(x)
{
	cout<<"In B constructor "<<endl;
}

int main()
{
	derived obj(10);
	return 0;
}