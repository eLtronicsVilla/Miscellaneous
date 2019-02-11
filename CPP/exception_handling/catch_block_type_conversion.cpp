// catch block and type conversion : type conversion cannot perform on catch block 

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'x';
    }
    catch(int x)
    {
        cout<<"In catch block"<<endl;
    }
    catch(...)
    {
        cout<<"Default catch block"<<endl;
    }
    
}