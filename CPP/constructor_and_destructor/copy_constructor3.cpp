/* what will happen if we remove copy construtor from code
 changes made to str2 will reflect in str1 as well as which is never expected.
 
 Program will give below error:
 undefined reference to `String::String(String const&)'

Can we make copy constructor private?
yes, a copy construtor can be made private.
when we make a copy constructor private in a class , object of that class become non-copyable.
This is particularly used when a class has pointer and dynamically allocated resource.

In this case we write our own copy constructor or private copy constructor. So that user get
compiler error rather than getting abort at run time.

Why argument to a copy constructor must be pass as a reference?
 A copy constructor is called when an object is pass by a value.\copy constructoe itself is a function 
 so if we pass as a value , a call to copy constructor would be made to call copy constructor.Which is a iterative process.

 Why argument to a copy constructor should be const?
 


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