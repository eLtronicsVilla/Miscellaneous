// nested namespace in c++
// namespace can be nested , resolution of namespace variable is hierarchical.

#include <iostream>
using namespace std;

namespace one
{
    int a=5;
    namespace two
    {
        int b=6;
    }
}

int main()
{
    cout<<one::two::b<<endl;c
}