#include <iostream>
using namespace std;
//What is raw Pointer?
// - Points to another type
// - Holds the memory address of another variable
// - Used for indirect access to other variable
// - Need not to be initialize during declaration
// - Declare with * operator

//int *ptr;
//int *ptr1, *ptr2, *ptr3, ptr;

// T get the address of operator.
// '&' is used for address of variable.
// 
void Addw(int *a, int *b, int* sum){
	*sum = *a+*b;
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void factorial(int *a, int *result){
	int sum = 1;
	
	for(int i = 1; i<= *a; i++){
		sum *= i;
	
	}

	*result = sum;
}

int main(){
	
	int x = 5;
	int y = 5;
	cout << &x << endl;
	int *ptr = nullptr;
	//cout<<ptr<<endl;
	//cout<<*ptr<<endl;
	//*ptr = 10;
	int *a = new int{30};
	int *b = new int{20};
	int  sum=0; 
	Addw(&x, &y, &sum);
	cout<<"Sum:"<<sum<<endl;
	cout<<"before swap"<<endl;z
	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
	swap(&x, &y);
	cout<<"after swap"<<endl;
	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
	int result=0;
	factorial(&x, &result);
	std::cout<<result<<std::endl;
}

// NULL is a macro in C & pre-C++11
// It is defined as 0 in most compiler
// It is used to initialize pointer types
// C++11 introduced a new type of null called nullptr
// This is type safe and better than NULL macro.
// Always use nullptr to initialize a pointer, instead of NULL macro.

