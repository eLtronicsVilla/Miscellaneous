// extending namespace ( using same name twice)
// It is possible to create two namespace block having same name.
// second namespace block is continuation of first one.

#include <iostream>
using namespace std;

namespace one 
{
    int x = 20;
}

namespace one 
{
    int y = 30;
}

int main()
{
    cout<<"in first namespace "<<one::x<<endl;
    cout<<"in second namespace "<<one::y<<endl;
}