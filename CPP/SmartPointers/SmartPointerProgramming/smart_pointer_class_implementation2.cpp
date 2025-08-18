#include <iostream>
using namespace std;

template <class T> class SmartPointer{
	T *ptr;
public:
	SmartPointer(T *p = NULL){
		ptr = p;
	}
	~SmartPointer(){
		delete ptr;
	}

	T& operator*(){
		return *ptr;
	}

	T* operator->(){
		return ptr;
	}
};

int main(){
	SmartPointer<int> smptr(new int());
	*smptr = 20;
	std::cout<<*smptr<<std::endl;
}