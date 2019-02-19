// To avoid error of default constructor , when any other constructor is created in ypur class 
// then must create a default constructor.

#include <iostream>
using namespace std;

class Point
{
	int x,y;
public:
	Point (int i,int j)
	{
		x=10;
		y=20;
	}
	void print()
	{
		cout <<"x ="<<x<<"y "<<y<<endl;
	}

};

	int main()
	{
		Point p1(10,20);
		Point p2=p1; // this will run fine
		p2.print();
		return 0;

	}