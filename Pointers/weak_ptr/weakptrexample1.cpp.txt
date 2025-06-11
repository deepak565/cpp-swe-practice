#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
	Demo() {
	std::cout<<"Demo Constructor called"<<std::endl;
}
	~Demo() {
	std::cout<<"Demo Destructor called"<<std::endl;
}
	void display() {
	std::cout<<"Display method called"<<std::endl;
}


};



int main() {
std::shared_ptr<Demo> d1 = std::make_shared<Demo>();
d1->display();
std::cout<<"count : "<<d1.use_count()<<std::endl;
std::weak_ptr<Demo> d2 = d1;
d2.lock()->display();
std::cout<<"count : " <<d2.use_count()<<std::endl;

return 0;
}