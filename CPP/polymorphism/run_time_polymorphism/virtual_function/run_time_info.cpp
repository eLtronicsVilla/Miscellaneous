/*
   Run time type information is a mechanism that exposes information about an object's data type at run time and is available only for the classes which have at least one virtual function.

Ex: dynamic_cast uses RTTI,


 */

#include <iostream>
using namespace std;
class B {};
class D : public B {};
int main()
{
	B *b = new D;
	D *d = dynamic_cast<D*>(b);
	if(d != NULL)
		cout<<"works";
	else
		cout<<"cannot cast B* to D*";
	return 0;
}
