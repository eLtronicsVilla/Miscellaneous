#include <iostream>
using namespace std;
class account
{   
	private:
		int balance;
		static float roi;  //class variable declaration
	public:
		void setbalance(int b)
		{
			balance=b;
		}
		static void setroi(float r)
		{ roi=r; }
		void print()
		{
			cout<<balance <<" "<<roi <<endl;	
		}
};
float account:: roi=3.5f; //static variable definition
int main()
{
	account a;
	a.setroi(4.5f);
	account::setroi(4.5f);
	a.print();
}
