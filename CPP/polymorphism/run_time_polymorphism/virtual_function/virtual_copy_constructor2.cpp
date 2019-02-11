/*

If what type of object will be copy -paste as it is run time decision.
Then here it follows virtual constructor.

*/

#include <iostream>
using namespace std;

//library start

class Base
{
public:
Base() {}
virtual ~Base() {}
virtual void ChangeAttributes() = 0;
// the virtual constructor
static Base *Create(int id);
//The virtual copy constructor
virtual Base *Clone() = 0;
};

class Derived1 : public Base
{
public:
Derived1()
{
cout<<"Derived1 created"<<endl;
}

Derived1(const Derived1& rhs)
{
cout<<"Derived1 created by deep copy"<<endl;
}
~Derived1()
{
cout<<"Derived1 destroyed"<<endl;
}
void ChangeAttributes()
{
cout<<"Derived attributes changed"<<endl;
}

Base *Clone()
{
return new Derived1(*this);
}
};

class Derived2 : public Base
{
public:
Derived2()
{
cout<<"Derived2 created"<<endl;
}
Derived2(const Derived2& rhs)
{
cout<<"Derived2 created by deep copy"<<endl;
}

~Derived2()
{
cout <<"Derived2 destroyed"<<endl;
}

void ChangeAttributes()
{
cout <<"Derived2 attributes Changed" <<endl;
}

Base *Clone()
{
return new Derived2(*this);
}
};

class Derived3 : public Base
{
public:
Derived3()
{
cout <<"Derived3 created"<<endl;
}
Derived3(const Derived3& rhs)
{
cout<<"Derived3 created by deep copy"<<endl;
}

~Derived3()
{
cout<<"~Derived3 destroyed"<<endl;
}

void ChangeAttributes()
{
cout<<"Derived3 attributes change"<<endl;
}
Base *Clone()
{
return new Derived3(*this);
}
};
// we can also declared "Create" outside Base.
//But it is more relevant to limit it's scope to Base

Base *Base::Create(int id)
{
// just expand the if-else ladder , if new Derived class is User need not be recompiled to create newly added class

if (id ==1)
{
return new Derived1;
}
else if (id==2)
{
return new Derived2;
}
else
{
return new Derived3;
}
}

// Library end

// Utility start

class User
{
public:
User() : pBase(0)
{
//creates any object or Base heirarchey at runtime

int input;
cout <<"Enter ID (1,2 or 3): ";
cin>>input;

while((input !=1) && (input !=2) && (input !=3))
{
cout <<"Enter ID (1,2 or 3 only): ";
cin>>input;
}

//create object via virtual constructor

pBase = Base::Create(input);
}

~User()
{
if (pBase)
{
delete pBase;
pBase=0;
}
}

void Action()
{
//duplicate current object
Base *pNewBase = pBase->Clone();
//change its attributes
pNewBase->ChangeAttributes();
//Dispose the created object
delete pNewBase;
}
private:
Base *pBase;
};

////Utility END

/// Consumer of User (Utility) class

int main()
{
User *user = new User();
user->Action();
delete user;
}
