/* 
Exception handling in C++.
Exception are run time anamolies or abnormal condition that program encountered during it's execution.
There are two types exception : synchronous and asynchronous.
try: represent a block of code and throw an exception.
catch : represent a block of code that is executed when a excetion is thrown.
throw : used to throw an exception and that thrown by function but doesn't handle by itself.
*/

#include <iostream>
using namespace std;

int main()
{
 int x = -1;

 cout<<"Before try"<<endl;
 try
 {
     cout<<"Inside try"<<endl;
     if (x<0)
     {
         throw x;
         cout<<"After throw condition"<<endl;
     }  
 }
 catch(int x)
 {
     cout<<"Exception caught"<<endl;
 }
 cout<<"After catch block"<<endl;
 return 0;
}

