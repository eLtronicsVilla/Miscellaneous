#include <iostream>
#include <cmath>
using namespace std;
class complex
{
	private :
		double real;
		double imag;

	public:
		//default constructor 
		complex(double r= 0.0, double i = 0.0) : real (r), imag(i)
	{}

		//magnitude : usual function style 
		double mag()
		{
			return getMag();
		}
		operator double()
		{
			return getMag();
		}
	private :
		//class helper to get magnitude 
		double getMag()
		{
			return sqrt(real *real + imag * imag);
		}
};

int main()
{
	complex com(3.0,4.0);
	//print magnitude
	cout<< com.mag() <<endl;
	cout<<com<<endl;
}
