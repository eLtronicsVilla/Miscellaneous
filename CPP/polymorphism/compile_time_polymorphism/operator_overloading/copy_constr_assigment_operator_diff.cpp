// difference in copy constructor and assignment operator


#include <iostream>
using namespace std;

class Test   // create a class
{
	public:
		Test() {}   // create a constructor
		Test (const Test &t)  // create a copy constructor
		{
			cout <<"Copy constructor called "<<endl;
		}
		Test& operator =(const Test &t)  //assignment operator
		{
			cout <<"Asignment operator called " <<endl;
		}
};
int main()
{
	Test t1,t2;
	t2 = t1;
	Test t3 = t1; // copy constructor call
	//getchar ();
	return 0;
}
