/*
There are a special catch block called 'catch all' ( catch(...)) to catch all type exception.
 In this program the exception is for integer but there is no block for integer handling .

*/

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(char *excep)
    {
    cout<<"In catch block"<<endl;
    }
    catch(...)
    {
        cout<<" In catch all block"<<endl;
    }    
}