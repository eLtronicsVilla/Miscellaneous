#include<iostream>
using namespace std;
class complex
{
	private :
		int a,b;
	public:
		void setdata(int,int);
		void display()
		{
			cout<<"\na="<<a<<"\nb="<<b;
		}
};

void complex :: setdata (int x,int y)       //out of class - scope resolution operator of that class
		{
			a=x;
			b=y;
		}

class B : public complex
{
int c,d;
B() 
{
c = a;
d = b;
}

};

int main()
{
B obj1;
obj1.setdata(12,49);
obj1.display();
}

