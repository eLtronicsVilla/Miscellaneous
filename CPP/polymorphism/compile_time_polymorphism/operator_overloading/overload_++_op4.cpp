#include <iostream>
using namespace std;

class GFG 
{
public:
int num;
GFG(int j)
{
num =j;
}
GFG * operator ->(void)
{
return this;
}
};
//
int main()
{
GFG T(5);
GFG *ptr = &T

// accessing num normally 
cout<< "T.num = " <<T.num <<endl;

//Accessing number using normal object pointer 
cout<< "Ptr->num =" << ptr->num <<endl;

//accessing num using -> operator 
cout << "T-num =" <<T->num <<endl;

return 0;
}
