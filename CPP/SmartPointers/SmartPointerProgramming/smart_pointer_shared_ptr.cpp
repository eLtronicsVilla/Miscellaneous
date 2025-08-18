//shared pointer
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
	std::shared_ptr<rectangle> shptr1(new rectangle(4,6));
	std::cout << shptr1->area() << std::endl;
	std::shared_ptr<rectangle> shptr2;
	shptr2 = shptr1;
	std::cout<< shptr2->area() << std::endl;
	std::cout << shptr1->area() << std::endl;
	std::cout<<shptr1.use_count()<<std::endl;
}