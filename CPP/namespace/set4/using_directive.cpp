// using directive
// This can be achieved by 'using' declarative inside namespace.
// A using directive that names the inline namespace in implicit inserted in enclosing namespace.

// program to use of 'using' to get same effect of 'inline'

#include <iostream>
using namespace std;

namespace one
{
    namespace two
    {
        namespace three
        {
            int a=6;
        }
        using namespace three;
    }
    using namespace two;
}

int main()
{
    cout<<one::a<<endl;
}