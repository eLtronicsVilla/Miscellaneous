/* virtual function -  runtime polymorphism
Derived class function is called using a base class pointer.
Virtual function is called according to the type of object pointed or reffered,
not according to the type of pointer or reference.
Virtual function are resolved late at runtime.
*/

#include <iostream>
using namespace std;

class Base
{
public:
virtual void show() 
{
cout << "In base \n";
}
};
	
class Derived : public Base
{
public:
void show()
{
cout<<"In derived \n";
}
};

int main(void)
{
Base *bp = new Derived;
bp->show();  // run time polymorphism
return 0;
}
