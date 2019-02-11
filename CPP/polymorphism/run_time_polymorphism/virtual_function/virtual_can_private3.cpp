/*
What happen when more restrictive access is given to a derived class method in c++.
C++ allows to give more restrictive access to derived class method.
*/

#include <iostream>
using namespace std;

class Base
{
public:
virtual int fun(int i)
{ }
};

class Derived: public Base
{
private:
int fun(int x)
{ }
};

int main()
{ }
