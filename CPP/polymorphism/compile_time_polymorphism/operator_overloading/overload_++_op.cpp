//cpp prog for operator overloading 

#include <iostream>
using namespace std;

class overload
{
private:
int count;

public:
overload():count(4)
{}
void operator ++()
{
count = count +1;
}
void display()
{
cout<<"Count : " <<count;
}
};

int main()
{
overload i;
++i;
i.display();
return 0;
}
