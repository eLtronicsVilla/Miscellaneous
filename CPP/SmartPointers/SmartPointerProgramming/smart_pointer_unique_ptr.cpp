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

int main()
{
	std::unique_ptr<rectangle> p1(new rectangle(20,30));

	std::cout<< p1->area() << std::endl;
	std::unique_ptr<rectangle> p2;
	p2 = move(p1);
	std::cout<< p2->area() << std::endl;

}