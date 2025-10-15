// 🔷 Problem 1: Student Exam and Result System
// Description:
// Design a class hierarchy for the following:

// Class Person – contains name and age.

// Class Student – inherits from Person, adds rollNumber.

// Class Exam – inherits from Student, contains marks for 3 subjects.

// Class Result – inherits from Exam, calculates total and average.

// Task:

// Input and display all details using the Result class.

// Calculate and print the total and average marks.

// Hint: This problem combines multilevel + hierarchical inheritance.


#include <iostream>
using namespace std;

class Person {
public:
int age;
string name;
	Person(int age, string name) : age(age) , name(name) {}

};


class Student : public Person { 
public:
int rollNumber;
	Student(int rollNumber, int age, string name) : rollNumber(rollNumber), Person(age, name) {}

};

class Exam : public Student {
public:
int subject1, subject2, subject3;
	Exam(int s1, int s2, int s3, int rollNumber , int age, string name) : subject1(s1), subject2(s2), subject3(s3), Student(rollNumber, age, name) {}
};

class Result : public Exam {
int total;
float average;
public:
	Result(int s1, int s2, int s3, int rollNumber , int age, string name) : Exam(s1, s2, s3, rollNumber, age, name) {}
	
	void calculateResult() {
	total = subject1 + subject2 + subject3;
	average = total / 3 ;
	}
	void display() {
	    cout<<"Student Name = "<<name<<endl;
	    cout<<"Student Age = "<<age<<endl;
	    cout<<"Student RollNumber = "<<rollNumber<<endl;
	    cout<<"Subject 1 marks = "<<subject1<<endl;
	    cout<<"Subject 2 marks = "<<subject2<<endl;
	    cout<<"Subject 3 marks = "<<subject3<<endl;
	    cout<<"Total marks obtained = "<< total << endl;
	    cout<<"Average marks obtained = "<< average <<endl;
	}
};

int main() {
	Result r(80,85,90,426,27,"Chimakurthi Manikanta Deepak");
	r.calculateResult();
    r.display();
return 0;
}


