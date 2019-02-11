// try-catch block can be nested.

#include <iostream>
using namespace std;

int main()
{
    cout <<"Before try parent"<<endl;
    try
    {
        cout<<"Before try child"<<endl;
        try
        {
            throw 10;
            cout<<"After throw child"<<endl;
        }
        catch(int x)
        {
            cout<<"In catch child"<<endl<<x<<endl;
            throw;
        }   
    }
    catch(int i)
    {
        cout<<"In catch parent"<<endl;
    }
    return 0;
}