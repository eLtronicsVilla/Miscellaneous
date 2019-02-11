/*

Extending namespace and unnamed namespace
It is also possible to create more than one namespace in the global space.
1. namespace having different name
2.Extending namespace (using same name twice)
3. Unnamed Namespace

*/

//1. A C++ program to show more than one namespace

#include <iostream>
using namespace std;

// first namespace 

namespace first 
{
int func()
{
return 5;
}
}

//second namespace 
namespace second 
{
int func()
{
return 10;
}
}

int main()
{
// member function of namespace
// accessed using scope resolution operator
cout<< first::func()<<endl;
cout<< second::func()<<endl;
return 0;
}
