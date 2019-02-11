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
	complex (int k)
	{
		a=k;
	}
	complex()         //default constructor
	{
		a=0;
		b=0;
	}
};
int main()
{
	complex c1(2,4),c2(5),c3;
	complex c4=complex(2,4),c5=complex(5),c6;
} 

