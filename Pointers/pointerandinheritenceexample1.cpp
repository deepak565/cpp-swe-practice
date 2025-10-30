// Problem 1: Shape Inheritance with Smart Pointers
// Problem:
// Design a class hierarchy to represent different shapes (Circle, Rectangle, Triangle) using inheritance. Each shape should have a method area() to calculate its area. You need to manage these shapes using smart pointers (like std::unique_ptr).

// Requirements:

// Shape class should be a base class with a pure virtual function area().

// Circle, Rectangle, and Triangle should inherit from Shape and override the area() function.

// Use std::unique_ptr to manage the memory for these shapes in the main program.

#include <iostream>
#include <memory>
#include <cmath>
using namespace std;

constexpr double PI = 3.141592653589793;

class Shape {
public:
    Shape() {}
    virtual void area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
int radius;
public:
    Circle(int r) : radius(r) {cout<<"Circle Constructor called..."<<endl;}
    ~Circle() {cout<<"Circle Destructor called!!!"<<endl;}
    void area() override {
        int area = PI * radius * radius;
        cout<<"Area of Circle :"<<area<<endl;
    }
};

class Rectangle : public Shape {
int l,w;
public:
    Rectangle(int lenght, int width) : l(lenght), w(width) {cout<<"Rectangle constructor called..."<<endl;}
    ~Rectangle() {cout<<"Rectangle Destructor called !!!"<<endl;}
    void area() override {
        int area = l*w;
        cout<<"Area of Rectangle :"<<area<<endl;
    }
};

class Triangle : public Shape {
    int b, h;
public:
    Triangle(int base, int height) : b(base), h(height) {cout<<"Triangle Constructor called..."<<endl;}
    ~Triangle() {cout<<"Triangle Destructor Called!!!"<<endl;}
    void area() override {
        int area = 0.5*b*h;
        cout<<"Area of Triangle :"<<area<<endl;
    }
};

int main() {
    {
        std::unique_ptr<Shape> circle = std::make_unique<Circle>(10);
        circle->area();
        
        std::unique_ptr<Shape> rectangle = std::make_unique<Rectangle>(4,5);
        rectangle->area();
        
        std::unique_ptr<Shape> triangle = std::make_unique<Triangle>(5,7);
        triangle->area();
    }
    
    return 0;
}