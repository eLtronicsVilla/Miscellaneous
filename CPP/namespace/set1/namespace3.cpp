/*
Namespace allows group named entity otherwise would have global scope, giving them namespace scope.
This organize the element of program in different logical scope refered by name.

- Namespace is feature added in C++. 
- Namespace is a declarative region that provide a scope to the identifier.
- Multiple namespace block with the same name are allowed.
- namespace declaration appear only at global scope
- namespace declaration can be nested within another namespace
- namespace declaration don't have access specifier
- no need to give ';' after the closing brace of definition of namespace
- we can split the definition of namespace over several units

*/

#include <iostream>
using namespace std;

namespace one
{
int value()
{
return 5;
}
}



*/
