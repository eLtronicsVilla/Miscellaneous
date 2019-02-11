// When an exception is thrown , all object created inside the enclosing try block
// are destructed before control is transfer to catch block.

#include <iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"In constructor Test"<<endl;
        }
        ~Test()
        {
            cout<<"In destructor Test"<<endl;
        }
};

int main()
{
    try
    {
        cout<<"In try block"<<endl;
        Test t1;
        throw 10;
    }
    catch(int i)
    {
        cout<<"In catch block "<<i<<endl;
    }
}

