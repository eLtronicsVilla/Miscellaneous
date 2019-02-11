// Ex: namespace
// without namespace declaration we cannot use two variable or member function of same name in same scope.
// A program to demonstrate need of namespace
// conflict declaration of int and double
#include <iostream>
int main()
{
int value;
value=0;
double value;  // Error here
value =0.0;
}
