// Question 1: Factory Ownership with unique_ptr and Polymorphism
// Problem:

// Design a class hierarchy with a base class Shape and two derived classes Circle and Square.
// Write a factory function that returns a unique_ptr<Shape>. Ensure there's no memory leak, and demonstrate polymorphic behavior using the unique_ptr.

// Requirements:

// Use only unique_ptr in the whole design.

// Call a virtual draw() function from a container (like vector<unique_ptr<Shape>>).

// Factory should accept a string and return the appropriate shape.

// Interview Focus:

// Ownership transfer

// Avoiding raw new

// Virtual destructors with smart pointers

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Shape {
public:
    virtual void draw() {
        cout<<"Draw a Shape"<<endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout<<"Drawing a Circle"<<endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout<<"Drawing a Square"<<endl;
    }
};

//Factory function

std::unique_ptr<Shape> createShape(std::string shapeType) {
    if(shapeType == "Circle") {
        return make_unique<Circle>();
    } else if (shapeType == "Square") {
        return make_unique<Square>();
    } else {
        return nullptr;
    }
}

int main() {

    std::vector<unique_ptr<Shape>> shapeVector;
    shapeVector.push_back(createShape("Circle"));
    shapeVector.push_back(createShape("Square"));
    
    for(const auto& s : shapeVector) {
        s->draw();
    }
    
    std::cout<<"=============================================="<<std::endl;

    std::unique_ptr<Circle> circle = std::make_unique<Circle>();
    circle->draw();
    std::unique_ptr<Square> square = std::make_unique<Square>();
    square->draw();

return 0;
}