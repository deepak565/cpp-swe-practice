Question 2: Vehicle Management Hybrid Inheritance
Create a base class Vehicle with members like brand and model.

Derive a class Car from Vehicle, adding numberOfDoors.

Derive another class ElectricVehicle from Vehicle, adding batteryCapacity.

Create a class ElectricCar that inherits from both Car and ElectricVehicle.

Demonstrate how to use virtual inheritance to avoid ambiguity and implement a function to display details of ElectricCar.


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
	return model;
	}
	string getVehicleBrand() {
	return brand;
	}
	string getVehicleModel() {
	retun model;
	}
};

class Car : virtual public Vehicle {
int numberOfDoors;
public:
	Car() {}
	void setNumberofDoors(int numofDoors) {
	numberofDoors = numofDoors;
	}
	int getnumberOfDoors() {
	return numberofDoors;
	}
};

class ElectricVehicle : virtual public vehicle {
string batteryCapacity;
public:

	ElectricVehicle() {}
	void setbatteryCapacity(const string &batteryCap) {
	batteryCapacity = batteyrCap;
	}
	int getbatteryCapacity(){
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
	displayDetails(){
	getVehicleBrand();
	getVehicleModel();
	getnumberOfDoors();
	getbatteryCapacity();
	}
	
};

int main() {
	ElectricCar eCar;
	eCar.displayDetails();

return 0;
}







