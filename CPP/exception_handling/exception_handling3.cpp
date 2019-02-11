// Implicit type casting does not happen for primitive type.
// in this program 'a' cannot be type cast to integer.

#include <iostream>
using namespace std;

int main()
{
    cout<<"Before try block"<<endl;
    try
    {
        cout<<"In try block"<<endl;
        char a;
        throw a;
        cout<<"After throw"<<endl;
    }
    catch(int x)
    {
        cout<<"In catch "<<x<<endl;    
    }
    catch(...)
    {
        cout<<"In catch all"<<endl;
    }
    cout<<"After the catch"<<endl;
}   