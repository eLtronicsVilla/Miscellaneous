/*

we cannot make a class constructor virtual in c++ to create polymorphic objects.
C++ being static typed language , it's meaningless to the c++ compiler to createan object polymorphically.
The compiler must be aware of the class type to create the object.
If we make constructor virtual , compiler flags an error.
Except inline , no other keyword is allowed in the declaration of constructor.
Object creation and object type are tightly coupled which force modification to extended. The objective of virtual constructor is to decouple object creation from it's type.

How can we create required type of object at runtime.

*/

#include <iostream>
using namespace std;

//Library start

class Base 
{

public:
Base() {}
virtual ~Base() {}   // ensure to invoke actual object destructor

// An interface

virtual void Display() =0;  //pure virtual function
};

class Derived1 : public Base
{
public:
Derived1()
{
cout<<"Derived created\n"<<endl;
}
~Derived1()
{
cout<<"Derived1 destroy\n"<<endl;
}

void Display()
{
cout<<"Action from derived"<<endl;
}
};
class Derived2 : public Base
{
public :
Derived2()
{
cout<<"Derived2 created"<<endl;
}
~Derived2()
{
cout<<"Derived2 destroyed"<<endl;
}
void Display()
{
cout<<"Action from derived2" <<endl;
}
};

class User
{
public:
//create Derived1
User() : pBase(0)
{
pBase = new Derived1();
}

~User()
{
if(pBase)
{
delete pBase;
pBase = 0;
}
}

//Delegates to actual object 
void Action()
{
pBase->Display();
}
private:
Base *pBase;
};

int main()
{
User *user = new User();

//Need derived1 functionality only
user->Action();
delete user;
}
