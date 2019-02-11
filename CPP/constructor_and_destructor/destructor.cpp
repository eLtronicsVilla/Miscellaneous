/* destructor in cpp
Destructor is a member function which destruct or delete an object.
A destructor is called when object goes out of scope.
1. the function end
2. the program end
3. a block containing local variable end
4. a delete operator is called

How destructor is different from a normal member function.
Destructor has same name as class preceded by a ~(tilde)
Destructor don't take any argument and don't return anything.

*/
#include <iostream>
#include <cstring>
using namespace std;

class String 
{
    private:
        char *s;
        int size;
    public:
        String(char *);  // parameterized constructor
        ~String();       // destructor
};

String::String (char *c)
{
    size = strlen(c);
    s = new char(size+1);
    strcpy(s,c);

}

String ::~String()
{
    delete []s;
}

int main()
{
    String s("brijesh");

}