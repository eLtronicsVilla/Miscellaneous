/* Constructor and type.
Constructor is member function in a class with the same name of the class name 
which initialize object of the class.  
Constructor is automatically call when an object is created.

Constructor is different from normal function as same name as class.
constructor do'nt have retur type.
If you do not specify a constructor , C++ compiler generate a default constructor.

types of constructor:
1)Default constructor
2)Parameterized constructor
3) Copy constructor
*/

#include <iostream>
using namespace std;

class A
{
    public:
        int a,b;
        A()
        {
            a=10;
            b=20;
        }
};

int main()
{
    // default constructor called automatically when object is created.
    A obj;
    cout<<"a:"<<obj.a<<endl;
    cout<<"b:"<<obj.b<<endl;
}