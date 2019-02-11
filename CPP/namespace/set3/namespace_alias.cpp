// namespace alias
// you can use an alias name for your namespace 

#include <iostream>
using namespace std;

namespace one
{
    namespace two
    {
        namespace three
        {
            int a=5;
        }
    }
}

// aliasing

namespace alias = one::two::three;

int main()
{
    cout<<alias::a<<endl;
}