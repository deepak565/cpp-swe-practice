#include <iostream>
using namespace std;

class Vehicle {
public:
	int number;
	string brandName;
	Vehicle(int number, string brandName) : number(number), brandName(brandName){}
public:
	virtual void display() {
	std::cout<<"Vehicle Number is : "<<number<<std::endl;
	std::cout<<"Vehicle brandName is : "<<brandName<<std::endl;
	}
	void show() {
	    std::cout<<"Base class show method"<<std::endl;
	}
};


class Bike : public Vehicle {
public:
	int chasisNumber;
	string ownerName;
	Bike(int chNumber, string Name, int number, string brandName) : chasisNumber(chNumber) , ownerName(Name), Vehicle(number, brandName) {}
public:
	void display() override {
	std::cout<<"Bike Chasis Number is : "<<chasisNumber<<std::endl;
	std::cout<<"Bike Owner Name is : "<<ownerName<<std::endl;
	}
	void visible() {
	    std::cout<<"Derived class visible method"<<std::endl;
	}
};

int main() {

Bike *b = new Bike(6723925, "Chimakurthi Manikanta Deepak" , 1, "BMW 1250 GS ADVENTURE");

// b->Vehicle::display();
// b->display();
// b->visible();
// b->show();

std::cout<<"==========="<<std::endl;
// if virtual is present then it will call derived class display() if no virtual then it will call base class display() if no 
// virtual then compile time binding if virtual id there then runtime binding
Vehicle *v = b;
v->display();
v->show();
//  v->visible(); ->error: we canot it directly like 
std::cout<<"==========="<<std::endl;

return 0;
}