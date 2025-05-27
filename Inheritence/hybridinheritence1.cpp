// 🔷 Question 1: University Staff & Student Management System
// Description:
// Design a class structure with the following:

// Person: Base class with name, age

// Department: Class with departmentName

// Staff: Inherits from Person and Department, with staffID

// Student: Inherits from Person, with rollNumber

// TeachingAssistant: Inherits from both Staff and Student

// Tasks:

// Input all details using TeachingAssistant

// Display details including name, age, departmentName, staffID, and rollNumber

// Concepts Covered: Hybrid (Multiple + Hierarchical + Multilevel)



#include <iostream>
using namespace std;

class Person {
string name;
int age;
public:
	Person() {}
	void setPersonName(string personName) {
	name = personName;
	}

	void setPersonAge(int personAge) {
	age = personAge;
	}
	
	string getPersonName() {
	return name;
	}
	
	int getPersonAge() {
	return age;
	}

};

class Department {
string departmentName;
public:
	Department() {}
	void setDepartmentName(string deptName) {
	departmentName = deptName;
	}
	string getDepartmentName() {
	return departmentName;
	}
};

class Staff : virtual public Person, virtual public Department {
string staffID;
public:
	Staff() {}
	void setStaffID(string sID) {
	staffID = sID;
	}
	string getstaffID() {
	return staffID;
	}
};

class Student : virtual public Person {
string studentRollNumber;
public:
	Student() {}
	void setstudentRollNumber(string srNum) {
	studentRollNumber = srNum;
	}
	string getstudentRollNumber() {
	return studentRollNumber;
	}
};
	
class TeachingAssistent : public Staff, public Student {
public:
	TeachingAssistent() {
	setPersonName("Manikanta");
	setPersonAge(26);
	setDepartmentName("Electronica and Communication Engineering");
	setStaffID("IBE2513");
	setstudentRollNumber("16NE1A0426");
	}
	void display() {
	    std::cout<<"Person Name is : "<<getPersonName()<<endl;
	    std::cout<<"Person Age is : "<<getPersonAge()<<endl;
	    std::cout<<"Department Name is : "<<getDepartmentName()<<endl;
	    std::cout<<"Staff ID is : "<<getstaffID()<<endl;
	    std::cout<<"Student Roll Number is : "<<getstudentRollNumber()<<endl;
	}
	
};
int main() {
    TeachingAssistent ta;
    ta.display();
    return 0;
}