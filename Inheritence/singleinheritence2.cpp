// 1.Single Inheritence
// ====================
// Base - Protected
// Derived-private

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    int tyres;
    string brand;
    Vehicle(int num, string name) : tyres(num), brand(name) {}

public:
    void display()
    {
        std::cout << "Number of Tyres : " << tyres << std::endl;
        std::cout << "Brand Name : " << brand << std::endl;
    }
};

class Bike : public Vehicle
{
public:
    int chasisNum;
    string ownerName;
    Bike(int num, string name, int count, string brandname) : chasisNum(num), ownerName(name), Vehicle(count, brandname) {}
    void display()
    {
        std::cout << "chasis Number of the Vehicle is : " << chasisNum << std::endl;
        std::cout << "Owner name is : " << ownerName << std::endl;
    }
};

int main()
{

    Bike b(1675675, "CHIMAKURTHI MANIKANTA DEEPAK", 2, "BMW 1250 GS ADVENTURE");
    b.Vehicle::display();
    b.display();

    return 0;
}