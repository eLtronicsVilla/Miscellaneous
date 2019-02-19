/* Initialization of data member.
class variable are initialize in the same order as they appear in the class declaration.

program will print some garbage value of b as b is initialize before a .
Sol: To overcome to this problem 
1) Chnage the order of declaration
2) change the order of initialization

*/

#include <iostream>
using namespace std;

class Base
{
    private:
        int b,a;
    public:
    Base(): a(10),b(10+a) {}
    void print();
};

void Base::print()
{
    cout<<"a "<<a<<"b "<<b<<endl;
}

int main()
{
    Base b;
    b.print();
}