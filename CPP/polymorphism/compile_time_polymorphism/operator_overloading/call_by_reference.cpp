// Actual argument and formal argument

#include <iostream>
using namespace std;
int sum (int &,int &);
int main()
{
	int a=5,b=6;
	int s=sum(a,b);         //----------<< actual argument (passing refence)
	cout<< "sum is "<<s<<a;
}
int sum (int &x,int &y)    // -------------<< formal argument
{
	return (x++);
}
