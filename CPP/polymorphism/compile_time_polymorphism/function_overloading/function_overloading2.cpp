
//overloading cannot do based on return type in non-class type formate.

#include <iostream>
using namespace std;
int foo () 
{
	return 10;
}
char foo() {  //compiler error , new declaration of foo()
	return 'a';
}
int main()
{
	char x = foo();
	//getchar();
	return 0;
}
