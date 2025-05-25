// 3. Ambiguity in Inheritance
// Create two classes A and B with a method print(). Inherit both into a class C and try calling print() from an object of class C.

// 🔧 Goal: Resolve ambiguity using scope resolution operator.

#include<iostream>
using namespace std;

class A {
public:
	void print() {
	cout<<"This is class A print"<<endl;
}
};

class B {
public:
	void print() {
	cout<<"This is Class B print"<<endl;
}
};

class C : public A, public B {
	

};

int main() {
C c;
c.A::print();
c.B::print();
return 0;

}