// 2. Avoiding Cyclic References
// Question:
// Explain a situation where two shared_ptr instances referencing each other can cause a memory leak. How does weak_ptr solve this issue?

#include <iostream>

#include <memory>

using namespace std;


class Son;

class Mother{
public:
    Mother() {}
    ~Mother() {cout<<"Mother Destructor called"<<endl;}
    void display() {
        cout<<"Mother Display Fxn called"<<endl;
    }
    std::weak_ptr<Son> son;
    
    
};

class Son {
public:
    Son() {}
    ~Son() {cout<<"Son Destructor called"<<endl;}
    void show() {
        cout<<"Son Show Fxn called"<<endl;
    }
    std::shared_ptr<Mother> mother;
};

int main() {
    
    std::shared_ptr<Son> son = std::make_shared<Son>();
    std::shared_ptr<Mother> mother = std::make_shared<Mother>();
    son->mother = mother;
    mother->son = son;
    
    son->show();
    mother->display();
    return 0;
}