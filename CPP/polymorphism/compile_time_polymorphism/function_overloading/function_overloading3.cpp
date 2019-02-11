
// static type function cannot be overloaded.

#include <iostream>
class Test {
	static void fun(int i) {}
	void fun(int i) {}
};
int main()
{
	Test t;
	return 0;
}
