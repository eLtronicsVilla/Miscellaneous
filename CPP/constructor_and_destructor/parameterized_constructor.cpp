/* parameterized constructor 
 need not to create a default constructor in the program.
Use of parameterized constructor
It is used to initialize the data element of different object
with different values when they are cretaed

It is used to overload constructor.
We can have more than one constructor in a class, it is called constructor overloading.

Copy constructor is a member function which initialize an object using another object of same class.

*/

#include <iostream>
using namespace std;

class A
{
    public:
    int a,b;
   A()
    {
        a=3;
        b=5;
    } 
    A(int i, int j)
    {
        a=i;
        b=j;
    }
    void print()
    {
        cout <<"a="<<a<<"b="<<b<<endl;
    }
};

int main()
{
    A obj1;
    A obj2(4,7);
    obj1.print();
    obj2.print();
}
