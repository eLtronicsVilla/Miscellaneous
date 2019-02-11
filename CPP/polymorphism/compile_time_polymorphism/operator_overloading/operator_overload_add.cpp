// addition operator overloading 


#include<iostream>
using namespace std;
class complex
{
	private :
		int a,b;
	public:
		//void setdata(int,int);
		void display()
		{
			cout<<"\na="<<a<<"\nb="<<b;
		}

	void setdata (int x,int y)
		{
			a=x;
			b=y;
		}		
	complex add (complex c)
	{ 
	//	complex r;  
		this->a+=c.a;
		this->b+=c.b;
		return *this;
	}
};

int main()
{
	complex c1,c2,c3;
	c1.setdata(1,3);
	c2.setdata(2,4);
	c1.display();
	c2.display();
	c3=c1.add(c2);
	c3.display();
}

