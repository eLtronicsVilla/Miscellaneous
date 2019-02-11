/*  Stack unwinding in C++

The process of removing function entry from function call stack at run time is called Stack unwinding.

It is related to exception handling.The function call stack is linearly searched for the exception handler , and all the entries before the function with exception handler are removed from the function call stack.
So exception handling involves Stack unwinding if exception is not handled in same function.

*/

#include <iostream>
using namespace std;

// A sample function f1() that throws an int exception
void f1() throw (int)
{
cout<<"\n f1() start ";
throw 100;
cout<<"\n f1() End ";
}

//another sample function f2() that calls f1()

void f2() throw (int)
{
cout<<"\n f2() start ";
f1();
cout<<"\n f2() End ";
}

// Another sample function f3() that calls f2() and handles exception thrown by f1()

void f3()
{
cout<<"\n f3() start ";
try {
f2();
}
catch(int i)
{
cout<<"\n Caught Exception: "<<i;
}
cout<<"\n f3() End";
}

// A driver function to demo Stack unwinding process

int main()
{
f3();
}   
