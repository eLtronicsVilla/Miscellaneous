/* copy constructor in c++
A copy constructor is a member function that initialize an object by another object of same class.

class_name (const class_name &old_obj);

*/

#include <iostream>
using namespace std;

class A
{
    private :
        int a,b;
    public:
        A(int i,int j)
        {
            a=i;
            b=j;
        }
        A(const A &obj)
        {
            a=obj.a;
            b=obj.b;
        }
        void printf()
        {
            cout<<"a= "<<a<<"b= "<<b<<endl;
        }
};

int main()
{
    A obj(4,5);
    A obj2 = obj;
    obj2.printf();
}