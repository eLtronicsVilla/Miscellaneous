// global static object.

#include <iostream>
using namespace std;

class Test
{
public:
	int a;
	Test()
	{
		a=10;
		cout<<"constructor is executed"<<endl;
	}
	~Test()
	{
		cout<<"destructor is executed"<<endl;
	}

};

static Test obj;
int main()
{
	cout<<"main starts"<<endl;
	cout<<obj.a;
	cout<<"main terminate"<<endl;
	return 0;
}