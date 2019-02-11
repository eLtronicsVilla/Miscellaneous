/*  Modification forces the users of User class to recompile, bad design , and would not close User class from further modification due to Base.
Addition of new class to the hierarchy forcing dependent of user class to recompile.
Can't we delegate the action of creating object of class hierarchy itself to a functiona and behave virtually . We can avoid the tight coupling between User and Base hierarchy .

*/

#include <iostream>
using namespace std;

class Base
{
public :
//the virtual constructor 
static Base *Create(int id);
Base() {}
virtual ~Base() {}

// An interface
virtual void Display() =0;
};

class Derived1 :  public Base
{
public:
Derived1()
{
cout<"Derived1 created ";
}
~Derived1()
{
cout<<"Derived1 destroyed"<<endl;
}
void Display()
{
cout<<"Action from Derived1"<<endl;
}
};
class Derived2 : public Base
{
public :
Derived2()
{
cout<<"Derived2 creted";
}
~Derived2()
{
cout<<"Derived2 destroyed"<<endl;
}

void Display()
{
cout <<"action from derived2"<<endl;
}
};

class Derived3 : public Base
{
public :
Derived3()
{
cout <<"Derived3 created"<<endl;
}
~Derived3()
{
cout <<"Derived destroyed" <<endl;
}
void Display()
{
cout <<"Action from derived"<<endl;
}
};

Base *Base::Create(int id)
{
//just explain the if-else ladder, if new Derived class is User code need not be recompiled to create newly added c

if (id ==1)
{
return new Derived1;
}
else if (id ==2)
{
return new Derived2;
}
else
{
return new Derived3;
}
}

class User 
{ 
public: 
    User() : pBase(0) 
    { 
        // Receives an object of Base heirarchy at runtime 
  
        int input; 
  
        cout << "Enter ID (1, 2 or 3): "; 
        cin >> input; 
  
        while( (input !=  1) && (input !=  2) && (input !=  3) ) 
        { 
            cout << "Enter ID (1, 2 or 3 only): "; 
            cin >> input; 
        } 
  
        // Get object from the "Virtual Constructor" 
        pBase = Base::Create(input); 
    } 
  
    ~User() 
    { 
        if( pBase ) 
        { 
            delete pBase; 
            pBase = 0; 
        } 
    } 


    // Delegates to actual object 
    void Action() 
    { 
        pBase->Display(); 
    } 
  
private: 
    Base *pBase; 
}; 
  
//// UTILITY END 
  
//// Consumer of User (UTILITY) class 
int main() 
{ 
    User *user = new User(); 
  
    // Action required on any of Derived objects 
    user->Action(); 
  
    delete user; 
} 
