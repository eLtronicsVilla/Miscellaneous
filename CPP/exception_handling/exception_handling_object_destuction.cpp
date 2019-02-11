// What will happen if exception thrown by constructor

#include <iostream>
using namespace std;

class Test1
{
    public:
    Test1()
    {
        cout<<"In the constructor Test1"<<endl;
    }
    ~Test1()
    {
        cout<<"In the destructor Test1"<<endl;
    }
};

class Test2
{
    public:
    Test2()
    {
        cout<<"In the constructor Test2"<<endl;
        throw 10;
    }
    ~Test2()
    {
        cout <<"In the destructor Test2"<<endl;
    }
};

int main()
{
    Test1 t1;
    Test2 t2;
    

}