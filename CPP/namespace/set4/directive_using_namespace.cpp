// Inline namespace and usages of 'using' directive inside namespace.
// Inline namespace is a namespace that usages the optional keyword 'inline' in it's original namespace

// C++ program to demonstrate working of inline namespace 

#include <iostream>
using namespace std;

namespace one
{
    inline namespace two
    {
        int a=6;
    } 
}

int main()
{
    cout<<one::a<<endl;
}