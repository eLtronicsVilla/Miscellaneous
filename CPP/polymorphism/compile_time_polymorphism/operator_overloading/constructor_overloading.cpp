// overload a constructor


#include <iostream>
using namespace std;
class complex
{
private:
	int a,b;
public:
	complex (int x,int y)     //parameterised constructor
	{
		a=x;
		b=y;
	}
	complex (float k,int j)  //constructor overloading
	{
		a=k;
		b=j;
	}
	complex()         //default constructor
	{
		a=0;
		b=0;
	}

};
int main()
{
	complex c1(2,4),c3;
	complex c4=complex(2.6f,4);
	//c5=complex(5),c6;
} 

