//if we do not override the virtual function in derived class then derived class will be abstract class.

#include <iostream>
using namespace std;

class Base
{
public:
int x;
virtual void fun()=0;
};

class Derived:public Base 
{ };

int main()
{
Derived d;
return 0;
}
