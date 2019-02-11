//redefinition type error : if we are using constant argument of same argument and return type function

#include <iostream>
#include <stdio.h>
using namespace std;

int f (int x) 
{
	return x+10;
}
int f(const int x) 
{
	return x+10;
}
int main()
{
	getchar();
	return 0;
}
