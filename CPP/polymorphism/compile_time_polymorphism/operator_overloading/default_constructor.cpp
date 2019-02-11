/*
   By default when an object is created , compiler will create default constructor and copy constructor. If any parameterized constructor we will create then copy constructor will create by compiler but not default constructor , we have to cretae default constructor. 
 */

#include <iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int x,int y)    //parameterized constructor
		{
			x=a;
			y=b;
		}
		complex()         //default constructo
		{}
		/*complex(complex &c)    //copy constructor
		  {
		  c.a=a;
		  c.b=b;
		  }*/

};

int main()
{
	complex c2(3,5);
	complex c3(c2);
	complex c4;
}
