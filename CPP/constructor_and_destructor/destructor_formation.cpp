//playing with destructor 

#include <iostream>
using namespace std;

// int i;

// class A
// {

// public:
// 	~A()
// 	{
// 		i = 20;
// 	}
// };

// int fun()
// {
// 	i = 40;
// 	A obj;
// 	return i;
// }

// int main()
// {
// 	cout<< "i= " << fun()<<endl;
// 	return 0;
// }

/*
// why this output is 40 , not 20.
// while returning from a function , destructor is the last method to be execute.
// destructor for the object "ob" is called after the value of i is copied to the return value of the function.
// So before destructor could change the value of i to 10 , the current value of i gets copied and hence the output is 3.


// How to make the program to output i=10.
following are the way to do that
1.Return by reference
Since refernce gives the l-value of the variable, by using return by reference the program will output "i=10".



#include <iostream>
using namespace std;

int i;

class A
{

public:
	~A()
	{
		i = 20;
	}
};

int & fun()
{
	i = 40;
	A obj;
	return i;
}

int main()
{
	cout<< "i= " << fun()<<endl;
	return 0;
}

*/

// 2. create the object of class in block scope .So here destrctor  of object will call after the block end, finally return value of destrcutor will copy.


#include <iostream>
using namespace std;

int i;

class A
{

public:
	~A()
	{
		i = 20;
	}
};

int & fun()
{
	i = 40;
	{
		A obj;
	}
	return i;
}

int main()
{
	cout<< "i= " << fun()<<endl;
	return 0;
}