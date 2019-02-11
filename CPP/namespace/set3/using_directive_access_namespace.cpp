//  using 'using' directive we can use namespace 

#include <iostream>
using namespace std;

namespace one 
{
    int a=7;
}
using namespace one;

int main()
{

    cout<<"In namespace one "<<a<<endl;
}