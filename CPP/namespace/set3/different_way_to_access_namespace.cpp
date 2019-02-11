// Different way to access namespace : Accessing,creating header,nesting and aliasing   
// C++ program to demonstrate accessing of variable
//  There are two ways to access namespace variable and function.

#include <iostream>
using namespace std;

namespace one 
{
    int a=5;
}

int main()
{
    // accessing via scope resolution
    cout <<"In namespace one :"<<one::a<<endl;
}