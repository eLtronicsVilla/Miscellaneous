// Does compiler create default constructor or when we have to create
// Compiler create default constructor for each base class ,untill we not create any constructor.

//case 1 : In this case compiler will create default constructor
/*
#include <iostream>
using namespace std;

class my_class
{
    private:
        int a=5;
};

int main()
{
    my_class m;
    return 0;
}
*/
// case2 : 

#include <iostream>
using namespace std;

class A
{
    public:
    int a;

    A(int n)
    {
        a=n;
    }
};

int main()
{
//    A obj;
    A obj2(5);
}
