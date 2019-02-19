/*
Private destructor :

It is not compiler error to create private destructor.
*/


#include <iostream>
using namespace std;

/*
class Test
{
	~Test() {}
};
int main()
{

}



// Error :In below case the compiler notice that the local variable 't' cannot be destructed because the destructor is private.


class Test
{
	~Test() {}
};
int main()
{
	Test t;
}



// In below case there is not such type of error , there is no object being constructed , program just create 
// pointer of type  "Test *" , so nothing is destructed.

// The above program will works fine.


class Test
{
private:
	~Test() {}

};
int main()
{
	Test *t;
}



class Test 
{
private:
	~Test()
};

int main()
{
	Test *t = new Test;
}



// above program works fine.

// In the case where the destructor is declared private , an instatance of the class can also be created using malloc()
// function.

/// ------------------------------- 

// the following program fails in destructor 

// cpp program to illustrate private constructor

class Test
{
private:
	~Test() {}
};

int main()
{
	Test *t = new Test;
	delete t;
}
// we notice that when a class has private destructor only dynamic object of clas can be created 


// Note : then what is the possible way to delete the object.
// Create class with private destructor and have a function as friend of the class.

*/

class Test
{
private:
	~Test(){}
	friend void destruct(Test *);

};

void destruct(Test *ptr)
	{
		delete ptr;
	}

int main()
{
	// construct the object 
	Test *t = new Test;
	// destruct the object
	destruct(t);
	return 0;

}
