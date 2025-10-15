// 🔷 Question 2: Hospital Management System
// Description:
// Design a class structure as follows:

// Person – Base class with name, age

// Doctor – Inherits from Person, adds doctorID, specialization

// Patient – Inherits from Person, adds patientID, ailment

// Staff – Independent class with staffID, designation

// Nurse – Inherits from both Staff and Doctor

// TreatmentAssistant – Inherits from both Nurse and Patient

#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person() {}
    void setPersonName(const string& personName) {
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

class Doctor : virtual public Person {
    string doctorID, specialization;
public:
    void setDoctorID(const string& docID) {
        doctorID = docID;
    }
    void setSpecialization(const string& spec) {
        specialization = spec;
    }
    string getDoctorID() {
        return doctorID;
    }
    string getSpecialization() {
        return specialization;
    }
};

class Patient : virtual public Person {
    string patientID;
    string ailment;
public:
    void setPatientID(const string& patID) {
        patientID = patID;
    }
    void setAilment(const string& patAilment) {
        ailment = patAilment;
    }
    string getPatientID() {
        return patientID;
    }
    string getAilment() {
        return ailment;
    }
};

class Staff {
    string staffID;
    string staffDesignation;
public:
    Staff() {}
    void setStaffID(const string& sID) {
        staffID = sID;
    }
    void setStaffDesignation(const string& sDesignation) {
        staffDesignation = sDesignation;
    }
    string getStaffID() {
        return staffID;
    }
    string getStaffDesignation() {
        return staffDesignation;
    }
};

class Nurse : virtual public Doctor, virtual public Staff {
public:
    Nurse() {}
};

class TreatmentAssistant : public Nurse, public Patient {
public:
    TreatmentAssistant() {}
    void displayDetails() {
        cout << "Name: " << getPersonName() << endl;
        cout << "Age: " << getPersonAge() << endl;
        cout << "Doctor ID: " << getDoctorID() << endl;
        cout << "Specialization: " << getSpecialization() << endl;
        cout << "Staff ID: " << getStaffID() << endl;
        cout << "Staff Designation: " << getStaffDesignation() << endl;
        cout << "Patient ID: " << getPatientID() << endl;
        cout << "Ailment: " << getAilment() << endl;
    }
};

int main() {
    TreatmentAssistant ta;

    ta.setPersonName("Manikanta");
    ta.setPersonAge(28);
    ta.setDoctorID("DOC123");
    ta.setSpecialization("Cardiology");
    ta.setStaffID("STA456");
    ta.setStaffDesignation("Senior Nurse");
    ta.setPatientID("PAT789");
    ta.setAilment("Heart Pain");

    ta.displayDetails();

    return 0;
}
