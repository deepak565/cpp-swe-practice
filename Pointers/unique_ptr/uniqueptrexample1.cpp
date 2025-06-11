#include<iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {
        std::cout<<"Constructor called"<<std::endl;
    }
    ~Demo() {
        std::cout<<"Destructor called"<<std::endl;
    }
    void display() {
        std::cout<<"Displaying Void method"<<std::endl;
    }
};


int main() {
    std::unique_ptr<Demo> d1 = std::make_unique<Demo>();
    d1->display();
    std::unique_ptr<Demo> d2 = std::move(d1);
    d2->display();
    return 0;
}