/* when do we use initializer list:

Initializer list can be used to initialize data member in a class.
The list of member can be initialize in constructor of that class by comma separated list followed by a colon.

Below code is a example for syntax of initializer list.

In this code initializer list will also intialize the member variable inside the constructor.

Case where compiler will not initialize , we have to intialize it using initializer list.

1. Initialization of non-static constant data member.
2. For initialization of reference member
3. For initialization of member object which do not have default constructor
4. For initialization of base class member
5. When constructor parameter name is same as data member
6. For performance reason

*/

#include <iostream>
using namespace std;

class Point 
{
	private:
		int x,y;
	public:
		Point ( int a = 0, int b = 0): x(a),y(b) {}
		/* the above initilizer list is optional as constructor can also be written as 
		Point(int a = 0, int b = 0)
		{
			x = a; 
			y = b;
		}
		*/

	void print()
	{
		cout <<"x " <<x << "y "<<y<<endl;
	}

};


int main()
{
	Point p1(10,50);
	p1.print();
}