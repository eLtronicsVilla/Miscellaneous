// Transitive property.
// A namespace N contains inline namespace M which in turn contain an inline namespace O , 
//member of O can be used as though they member of N and M.
// inline specifier makes the declaration from the nested namespace appear exactly if 
// they has declared in enclosing namespace.This means it drag out the declaration in from a nested namespace.
// advantage of using inline namespace :
// Avoid verbose. like cout<<one::two::three::a , using inline we need not to write like this.

#include <iostream>
using namespace std;

namespace one
{
        inline namespace two
        {
            inline namespace three
            {
                int a=7;
            }
        }
}

int main()
{
    cout<<one::a<<endl;
}