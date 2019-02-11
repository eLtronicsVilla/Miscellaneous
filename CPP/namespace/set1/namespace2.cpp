// using namespace we can create two variable or member function  with the same name scope.

// more than one variable are used without reporting any error because they are declared in different namespace.

#include <iostream>
using namespace std;

// variable created inside namespace

namespace one
{
int val = 500;
}
//global variable 
int val = 100;

int main()
{
// local variable
int val=200;
cout<<one::val<<'\n';
return 0;
}
