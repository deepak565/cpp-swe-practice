//virtual fucntion 

#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() = 0;
	
};

class Square : public Shape {
public:
	void draw() override { cout << "Drawing Square " <<endl; }
};

class Rectangle : public Shape {
public:
	void draw() override { cout<< "Drawing Rectangle " << endl; }
};

class Circle : public Shape {
public:
	void draw() override { cout << "Drawing Circle " << endl; }
};

int main() {
Square *s1 = new Square();
Shape *shape1 = s1; 
shape1->draw();
Rectangle *s2 = new Rectangle();
Shape *shape2 = s2; 
shape2->draw();
Circle *s3 = new Circle();
Shape *shape3 = s3; 
shape3->draw();

return 0;

}
