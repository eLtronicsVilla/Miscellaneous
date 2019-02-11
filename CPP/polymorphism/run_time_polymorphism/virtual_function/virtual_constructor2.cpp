//User class can make use Derived2 object.

#include <iostream>
using namespace std;

class Base
{
public:
Base() {}
virtual ~Base() {}
//an interface
virtual void Display() = 0;
};

class Derived1 : public Base
{
public :
Derived1()
{
cout <<"derived class created"<<endl;
}
~Derived1()
{
cout<<"Derived1 destroyed" <<endl;
}
void Display()
{
cout<<"Action from derived1"<<endl;
}
};

class Derived2 : public Base
{
public:
Derived2()
{
cout <<"Derived2 created\n";
}
~Derived2()
{
cout<<"Derived2 destroy\n";
}
void Display()
{
cout <<"Action from derived2";
}
};

// Library END

class User
{
public :

//created Derived1 and Derived2 based on input
User() : pBase(0)
{
int input ;  // ID to distinguish between derived1 and derived2
cout<<"Enter ID ( 1or 2) : ";
cin >>input;

while ( (input !=1) && (input !=2))
{
cout<<"Enter the ID ( 1 Or 2 only): ";
cin >>input;
}

if (input ==1)
{
pBase = new Derived1;
}
else
{
pBase = new Derived2;
}
}
~User()
{
if (pBase)
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
private :
Base *pBase;
};

int main()
{
User *user = new User();
user->Action();
delete user;
}
