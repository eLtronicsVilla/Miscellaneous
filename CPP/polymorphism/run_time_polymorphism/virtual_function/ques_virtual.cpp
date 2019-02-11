/*
can static function be virtual in c++.
static member function of a class cannot be virtual.

*/

#include <stdio.h>
using namespace std;

class Test
{
 public:
// virtual member function cannot be static 
virtual static void fun()
{ }
};
