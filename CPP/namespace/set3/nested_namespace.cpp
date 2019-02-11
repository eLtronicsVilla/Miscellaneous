// nested namespace 
// In C++ namespace can also be nested , namespace within a namespace.

#include <iostream>
using namespace std;

// nested namespace

namespace one
{
    int value=5;

    namespace two
    {
        int value =7;
    }
}

int main()
{
    cout <<"in namespace one :"<<one::value<<endl;
    cout<<"in namespace two :"<<one::two::value<<endl;
}