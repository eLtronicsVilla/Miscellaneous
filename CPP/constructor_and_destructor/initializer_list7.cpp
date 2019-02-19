/*
performance reason:
It's better to initialize all member variable in initializer list.
Instead of assigning value in body.

without initializer list :


class A
{
	int a;
	public ():
	A(int x)
	{
		a = x;  // initialized in the body
	}
};

here compiler follow below steps to create an object of type class A.
1. int constructor is called first for "a"
2. assignment operator of "int" is called inside body of class A constructor to assign.
 a=x;
 3. then finally destructor of "int" is called for a since it goes out of scope 


 consider same code for initializer list.

 class A
 {
	int a;
	public:
		A(int x):a(x){}  // initializer list is called

 };


1. copy constructor of "int" class is called to initialize the a with x.
the argument in initializer list are used to copy construct "a" directly.
2. destructor of "int " class is called since it goes out of scope.

we can see if i assign assignment inside constructor body, there are three function call 
constructor + destructor + addition assignment operator called 

if we use initializer list only two function is called.

1. constructor
2. destructor

*/