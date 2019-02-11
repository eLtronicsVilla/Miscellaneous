// If exception is thrown and not caught anywhere, the program terminate abnormally.
// Below code char is thrown but there is no code to deal with char exception.

#include <iostream>
using namespace std;

int main()
{
    cout <<" Before the try block"<<endl;
    try
    {
        cout<<"In try block"<<endl;
        char a;
        throw a;
        cout<< "After throw"<<endl;
    }
    catch(int x)
    {
        cout<<"In catch "<<x<<endl;
    }
    catch(...)
    {
        cout<<"In catch all block"<<endl;
    }

}
