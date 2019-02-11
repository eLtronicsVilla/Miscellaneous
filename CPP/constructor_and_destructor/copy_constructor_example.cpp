#include<iostream>
using namespace std;

class base{
public:
int a;
base(){
a = 10;
cout<<"in base = "<<a<<endl;
}

base(base &){
cout<<"copy constructor"<<endl;
}
};
class derived : public base
{
public:
derived(){
cout<< "in derived "<<endl;  
}
};

int main()
{
base o1,o3;
//derived o2;
o1.a=25;
o3=o1;
cout<<"o3.a"<<o3.a<<endl;
o3.a=20;
//o2(o1);
cout<<"o1.a="<<o1.a<<endl;
cout<<"o3.a="<<o3.a<<endl;
cout<<"o1.a="<<o1.a<<endl;
}
