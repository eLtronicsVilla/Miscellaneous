// catch block conversion constructor is not called for thrown object.

#include <iostream>
using namespace std;

class MyException1 {};
class MyException2 {
    public:
    //conversion constructor
    MyException2(MyException1 &e)
    {
        cout<<"Conversion constructor called"<<endl;
    }
};

int main()
{
    try
    {
       MyException1 myexp1;
       throw myexp1;
    }
    catch(MyException2 e2)
    {
        cout<<"MyException2"<<endl;
    }
    catch(...)
    {
        cout<<"Default catch block"<<endl;
    }
    return 0;
}