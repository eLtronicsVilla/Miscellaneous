/*

inline function are used for efficiency.The whole idea behin
d the inline function is that whenever inline function is ca
lled , code of inline function gets inserted or substituted 
at the point of inline function call at compile time.
Inline function are very useful when small function are frequently used and called in program many time.


By default all the function defined inside the class are implicitly consider as inline except virtual function( inline is a request to the compiler and its compilers choice to do inline or not).

Whenver virtual function is called using base class pointer it cannot be inline ( because call is resolved at run time but whenever called using the object(without reference or pointer) of that class , can be inline because compiler knows the exact class of the object at compile time. 
*/

#include <iostream>
using namespace std;

class Base
{
public:
virtual void who()
{
cout<<"In base"<<endl;
}
};

class Derived: public Base
{
public:
inline void who()
{
cout<<"I am Derived\n";
}
};

int main()
{
// here virtual function called through object of the class ( it will be resolved at compile time , so it is inlined.

//Base b;
//b.who();

//Here virtual function is called through pointer , so it cannot be inlined.

Base *ptr = new Derived();
ptr->who();

}
