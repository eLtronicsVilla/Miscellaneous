#include <iostream>
#include <memory>
using namespace std;

class Project{
	std::string prj_name;
public:
	Project(){
		std::cout<<"In Project constructor"<<std::endl;
	}
	void setProject(std::string name_pjct){
		prj_name = name_pjct;
	}

	std::string getProject(){
		return prj_name;
	}
	~Project(){
		std::cout<<"In Project destructor"<<std::endl;
	}
};

class employee{
std::shared_ptr<Project> ptrPjct;
public:
	employee(){
		std::cout<<"In employee constructor"<<std::endl;
	}
	void modifyProject(std::shared_ptr<Project> newprj, std::string new_prj){
		ptrPjct = std::move(newprj);
		ptrPjct->setProject(new_prj);
	}
	std::string accessNewPrjName(){
		return ptrPjct->getProject();
	}
	~employee(){
		std::cout<<"In employee destructor"<<std::endl;
	}
};

int main(){
	auto prj = std::make_shared<Project>();
	prj->setProject("IDFDF");
	std::cout<<prj->getProject() <<std::endl;
	employee e1;
	e1.modifyProject(prj, "WSAD");
	std::cout<<e1.accessNewPrjName() <<std::endl;
}