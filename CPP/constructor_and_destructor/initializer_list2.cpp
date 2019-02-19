/*
Initializer is used to initialize non static const data members.
Const data member must be initialized using initializer list.

Example below.
*/

#include <iostream>
using namespace std;

class Test 
{
	const int t;  // constant data member
	public:
		Test(int t):t(t) {}  // Initializer list must be use
		void print()
		{
			cout<<"t "<<t;
		}
};

int main()
{
	Test t1(30);
	t1.print();
}