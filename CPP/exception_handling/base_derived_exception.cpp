/* Exception handling - catching base and derived classes as exceptions
 If both base and derived class are caught as exception then catch block of derived class must appear before the base class.

*/

#include <iostream>
using namespace std;

class Base {};
class Derived: public Base {};

int main()
{
Derived d;
cout<<"before try"<<endl;
try {
cout<<"Inside try "<<endl;
throw d;
}
catch(Base b)
{
cout<<"Caught base exception"<<endl;
}
catch(Derived d)
{
//This catch block will never execute
cout<<"Caught Derived Exception";
}
return 0;
}

