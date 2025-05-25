// 4. Accessing Same-Named Data Members
// Both base classes Person and Employee have a name variable. In a derived class Manager, access both name members distinctly.

// 🔧 Goal: Learn how to handle naming conflicts in multiple inheritance.


#include<iostream>
using namespace std;

class Person {
public:
    string name = "Ravi";
    
};

class Employee {
public:
    string name = "Teja";
    
};

class Manager : public Person, public Employee {
public:
    Manager() {
    cout<<"Person name is " <<Person::name<<endl;
    cout<<"Employee name is "<<Employee::name<<endl;
    }
};

int main() {
    Manager m;
    
    return 0;
}