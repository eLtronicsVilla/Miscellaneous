/* copy constructor:
A copy constructor may be called in following case.
1. When object of the class is return by value.
2. when object of the class (fuction) pass by value as an argument.
3. when an object is constructed based on another object of same class. 
4. When an compiler generate a temporary object. 

If we do'nt defined our own copy constructor , compiler will create a default copy constructor of each class.
which does a member wise copy between objects.The compiler created copy constructor works fine in general.

We have to define our own copy constructor when only if an object has pointer or dynamic allocated resource 
like a file handler and network connection , etc.

Default constructor does only shallow copy.Shallow copy means one to one copy.

Deep copy is possible with only user defined copy constructor.we make sure that pointer (or reference) of
copied object point to the new mememory location.

copy constructor and assignment operator.
MyClass t1,t2;
MyClass t3=t1; // copy constructor
t2=t1; // assignment operator

copy constructor is called when a new object is created from an existing object, 
as a copy of existing object. 

Assignment operator is called when an already initialized object is assign a new value from 
another existing object.
 
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
        String(const char *s =NULL);  // constructor
        ~String()
        {
            delete [] s;  // destructor 
        }
        String( const String &); // copy constructor 

        void print()
        {
            cout<<s<<endl; // function to print string 
        }
        void change(const char *);  // function to change
};

String::String (const char *str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s,str);
}

void String::change(const char *str)
{
    delete s;
    size=strlen(str);
    s = new char [size+1];
    strcpy(s,str);
}

String::String (const String& old_str)
{
    size=old_str.size;
    s = new char [size+1];
    strcpy(s,old_str.s);
}

int main()
{
    String str1("GeegsforGeegs");
    String str2 = str1;

    str1.print();
    str2.print();

    str2.change("now changed geegsforgeegs");

    str1.print();
    str2.print();
}