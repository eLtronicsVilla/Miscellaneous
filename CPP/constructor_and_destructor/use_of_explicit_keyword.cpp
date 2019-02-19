//use of explicit keyword

#include <iostream>
using namespace std;

class Complex
{
    private:
        double real,imag;
    public:
    // default constructor
    Complex(double r=0.0 , double i=0.0): real(r),imag(i) {}

    // A method to compare two complex number
    bool operator == (Complex rhs)
    {
        return (real == rhs.real && imag == rhs.imag) ? true : false;
    }
    
};

int main()
{
    Complex com(4.0,4.0);
    if (com==4.0)
        cout<<"same"<<endl;
    else
        cout<<"Not same"<<endl;
    return 0;
}