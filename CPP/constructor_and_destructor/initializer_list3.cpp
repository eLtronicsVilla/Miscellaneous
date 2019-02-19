/*
Initialization of reference member.
Reference member must be initialize using initializer list.
Ex:

*/

#include <iostream>
using namespace std;

class Test
{
	int &t;
public:
	Test(int &t):t(t) {} // initializer list must be used
	void print()
	{
		cout<<"t = "<<t<<endl;
	}
};


int main()
{
	int a=50;
	Test t2(a);
	t2.print();
	a=60;
	t2.print();
}