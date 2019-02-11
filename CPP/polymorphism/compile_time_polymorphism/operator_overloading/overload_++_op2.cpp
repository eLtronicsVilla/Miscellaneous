#include <iostream>
using namespace std;

class overload
{
private :
int count ;
public:
overload(int i) : count(i) {}

overload operator++(int)
{
return (count++);
}
overload operator ++()
{
count = count +1;
return count;
}
void display()
{
cout<< "Count: " <<count <<endl;
}
};

//Driver code 

int main()
{
overload i(5);
overload post (5);
overload pre(5);

//This calls function overload operator ++() function

pre = ++i;
cout <<"result of I = ";
i.display();
cout<<"result of preincreament = ";
pre.display();
//this calls function overload operator ++() " function
i++; //just to show diff
i++;
post = i++;
cout<<"result of post increament = ";
post.display();
cout<<"And result of i , here we see difference : ";
i.display();
return 0;
} 
