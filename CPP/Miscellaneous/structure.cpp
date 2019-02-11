#include <iostream>
using namespace std;

struct book
{
private:
int bookid;                   //Structure have 5 member 3 member variable and 2 member function
char title[20];
float price;
public:
void display ()
{
cout<<"\n"<<bookid<<title<<price;
}
void input()
{
cout<<"enter book id ,title and price";
cin>>bookid>>title>>price;
}
};
int main()
{
book b1;                            //this is to achieve encapsulation to make a group of related subject
b1.input();
b1.display();
}

