 /* 
Can a destructor be pure virtual in c++.
Yes,it is possible to have pure virtual destructor , if class containing pure virtual destructor must to provide a function body for pure virtual destructor.But destructor are always called in the reverse order of the class derivation.
Derived class destructor will be invoked first & then base class destructor .

if definition for the pure virtual destructor is not provided thwn what will be called during object destruction.

Therefore compiler and linker enforce existence of function body for pure virtual destructor.

*/
// this program have function body for virtual destructor , so this will give correct output.

#include <iostream>
using namespace std;

class Base 
{
public:
virtual ~Base()=0;  // pure virtual destructor
};

Base::~Base()
{
    cout<<"In virtual Base destructor"<<endl;
}

class Derived:public Base
{
public:
~Derived()
{
cout<<"In derived virtual function"<<endl;
}
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
