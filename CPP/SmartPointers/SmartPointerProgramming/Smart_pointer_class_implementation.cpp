#include <iostream>
using namespace std;

class SmartPointer{
	int *ptr;
public:
	SmartPointer(int *p= NULL){
		ptr = p;
	}
	~SmartPointer()
	{
		delete ptr;
	}
	int& operator*(){
		return *ptr;
	}
	int* operator->(){
		return ptr;
	}

};

int main(){
	SmartPointer smptr(new int());
	*smptr = 40;
	cout<<*smptr <<endl;
}