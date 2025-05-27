// Question 2: Vehicle Management Hybrid Inheritance
// Create a base class Vehicle with members like brand and model.
// Derive a class Car from Vehicle, adding numberOfDoors.
// Derive another class ElectricVehicle from Vehicle, adding batteryCapacity.
// Create a class ElectricCar that inherits from both Car and ElectricVehicle.
// Demonstrate how to use virtual inheritance to avoid ambiguity and implement a function to display details of ElectricCar.


#include <iostream>

using namespace std;

class Vehicle {
string brand;
string model;
public:
	Vehicle() {}
	void setVehicleBrand(const string &vehicleBrandName) {
	brand = vehicleBrandName;
	}
	void setVehicleModel(const string &vehicleModelName) {
	model = vehicleModelName;
	}
	string getVehicleBrand() {
	return brand;
	}
	string getVehicleModel() {
	return model;
	}
};

class Car : virtual public Vehicle {
int numberOfDoors;
public:
	Car() {}
	void setNumberofDoors(int numofDoors) {
	numberOfDoors = numofDoors;
	}
	int getnumberOfDoors() {
	return numberOfDoors;
	}
};

class ElectricVehicle : virtual public Vehicle {
string batteryCapacity;
public:

	ElectricVehicle() {}
	void setbatteryCapacity(const string &batteryCap) {
	batteryCapacity = batteryCap;
	}
	string getbatteryCapacity(){
	return batteryCapacity;
	}
};


class ElectricCar : public Car , public ElectricVehicle {
public:
	ElectricCar() {
	setVehicleBrand("Mahendra");
	setVehicleModel("BEV6");
	setNumberofDoors(4);
	setbatteryCapacity("59 kwh");
	}
	void displayDetails(){
    cout<<"Vehicle Brand :"<<getVehicleBrand()<<endl;
	cout<<"Vehicle Model :"<<getVehicleModel()<<endl;
	cout<<"Number of Doors :"<<getnumberOfDoors()<<endl;
	cout<<"Battery Capacity :"<<getbatteryCapacity()<<endl;
	}
};

int main() {
	ElectricCar eCar;
	eCar.displayDetails();

return 0;
}







