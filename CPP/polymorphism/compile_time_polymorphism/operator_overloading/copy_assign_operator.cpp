// copy constructor and assignment operator


#include <iostream>
using namespace std;

class Test
{
	public:
		Test() {}
		Test (const Test &t)
		{
			cout <<"Copy constructor called "<<endl;
		}
		Test& operator =(const Test &t)
		{
			cout <<"Asignment operator called " <<endl;
		}
};
int main()
{
	Test t1,t2;
	Test t3 = t1;
	//getchar ();
	return 0;
}
