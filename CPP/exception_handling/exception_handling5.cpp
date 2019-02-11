/*
Derived class exception should be caught before Base class exception.
C++ library has a standard exception class , which is a Base class for all exception.
All object thrown by standard library are derived from this class.

in c++ all exception are unchecked.Compiler doesn't check whether a exception is caught or not.
It is not necessary to specify all uncaught exception in function declaration.
*/

#include <iostream>
using namespace std;

//This function signature is fine by the compiler .
//Function should specify by all the uncaught exception.
// signature should be void fun(int *ptr, int x) throw (int *,int)

void fun(int *ptr,int x)
{
    if (ptr==NULL)
    {
        throw ptr;
    }
    if (x==0)
    {
        throw x;
    }

}

int main()
{
    cout<<"before try"<<endl;
    try
    {
        cout<<"In try"<<endl;
        fun(NULL,0);
    }
    catch(...)
    {
        cout<<"caught exception from func"<<endl;
    }
}