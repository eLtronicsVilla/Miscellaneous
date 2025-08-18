//weak pointer : It is a smart pointer that holds non-owning reference to the object.
// To avoid the circular reference while accessing the resource by smart pointers, when two or more object pointing
// to each other using shared_ptr. It does not maintain a reference count.

#include <iostream>
#include <memory>
using namespace std; 

class rectangle{
	int width, height;
public:
	rectangle(int w, int h){
		width = w;
		height = h;
	}
	int area(){
			return width*height;
		
	}
};

int main(){
	shared_ptr<rectangle> shptr1(new rectangle(4,6));
	cout << shptr1->area()<<endl;
	weak_ptr<rectangle> shptr2;
	shptr2 = shptr1;
	
	cout << shptr1->area()<<endl;
	cout << shptr1.use_count()<<endl;
}