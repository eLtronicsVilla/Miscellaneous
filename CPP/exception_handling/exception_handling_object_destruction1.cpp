// Exception handling and object destruction
// Destructor of the object is automatically called before catch block.

#include <iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<" In Test constructor"<<endl;
        }
        ~Test()
        {
            cout<<"In Test destructor"<<endl;
        }
};

int main()
{
    try
    {
        cout<<"In try block"<<endl;
        Test t;
        throw 10;
    }
    catch(int x)
    {
        cout<<"In catch block"<<endl;
    }

}