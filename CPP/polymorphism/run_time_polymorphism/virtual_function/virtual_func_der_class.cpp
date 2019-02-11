/* 
virtual function in derived class , once a member function is declared as a virtual function in a base class,In other words , it is not necessary to use the keyword virtual in the derived class while declaring redefined version of the virtual base class function.
*/

#include <iostream>

using namespace std;

class A
{
public:
virtual void fun()
{
cout<<"\n A::fun() called ";
}
};

class B: public A
{
public:
void fun()
{
cout<<"\n B::fun() called ";
}
};
class C: public B
{
public:
void fun()
{
cout<<"\n C::fun() called ";
}
};

int main()
{
C c;  // an object of class C
B *b = &c; // A pointer of type B* pointing to C
b -> fun(); // this line print "C:fun() called
return 0;
}

