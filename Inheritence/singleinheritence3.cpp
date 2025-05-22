// 1.Single Inheritence
// ====================
// Base - Protected
// Derived-private


#include <iostream>
#include <string>

using namespace std;


class Vehicle{
public:
	int tyres;
	string brand;
	Vehicle(int num, string name) : tyres(num), brand(name) {}
public:
     void display() {
	std::cout<<"Number of Tyres : "<<tyres<<std::endl;
	std::cout<<"Brand Name : "<<brand<<std::endl;
	}
};

class Bike : public Vehicle {
public:
	int chasisNum;
	string ownerName;
	Bike(int num, string name, int count, string brandname) : chasisNum(num), ownerName(name) , Vehicle(count, brandname) {}
	void display()  {
	std::cout<<"Number of Tyres : "<<tyres<<std::endl;
	std::cout<<"Brand Name : "<<brand<<std::endl;
	std::cout<<"chasis Number of the Vehicle is : "<< chasisNum<<std::endl;
	std::cout<<"Owner name is : "<<ownerName<<std::endl;
	}
};

int main() {


Bike *bptr = new Bike(1675675,"CHIMAKURTHI MANIKANTA DEEPAK", 2, "BMW 1250 GS ADVENTURE");
bptr->display();
std::cout<<"=========="<<std::endl;
Vehicle *vptr = bptr;
vptr->display();

// bptr->Vehicle::display();


// check with virtual and without virtual
// "Is displayInfo() virtual?"

// "Yes — so instead of calling Vehicle::displayInfo, I’ll look at the actual object type (which is Bike) and call Bike::displayInfo."





return 0;
}