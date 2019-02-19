/* if a class have a constructor which can be called with a single argument, then this constructor become 
become conversion constructor because such a constructor allow conversion of the single argument to the class
being constructed.
we can avoid such implicit conversion as these may lead to unexpected result.
we can make the constructor explicit by 'explicit' keyword.

we can typecast the double value to complex.but now we have to explicitly typecast it.

*/


#include <iostream>
using namespace std;

class Complex
{
    private:
        double real;
        double imag;
    public:
        explicit Complex(double r = 0.0 , double i = 0.0): real(r),imag(i) {}
    // a method to compare two complex number

    bool operator== (Complex rhs)
    {
        return (real == rhs.real && imag == rhs.imag )? true : false ;
    }
};

int main()
{
    Complex com1(3.0,0.0);
    if (com1 == ((Complex)3.0))
        cout<<"same"<<endl;
    else
        cout<<"not same"<<endl;
    return 0;
}   