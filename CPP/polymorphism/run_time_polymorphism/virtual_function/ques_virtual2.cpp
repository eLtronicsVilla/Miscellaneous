// static member function cannot be const and volatile.

#include <iostream>
using namespace std;

class Test
{
public:
// Error : Static member function cannot be const
static void fun() const {}
};
