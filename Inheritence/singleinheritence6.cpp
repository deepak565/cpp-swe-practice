#include <iostream>
using namespace std;

class Parent {
public:
    Parent() { cout << "Parent constructor\n"; }
    virtual void display() { cout << "Parent display\n"; }
    virtual ~Parent() { cout << "Parent destructor\n"; }
};

class Child : public Parent {
public:
    Child() { cout << "Child constructor\n"; }
    void display() override { cout << "Child display\n"; }
    ~Child() { cout << "Child destructor\n"; }
};

int main() {
    cout << "---Stack Object---\n";
    Child c;             // Stack object
    c.display();         // Direct call

    cout << "\n---Heap Object via Pointer---\n";
    Parent* p = new Child();  // Base pointer, derived object
    p->display();             // Runtime polymorphism (calls Child::display)

    delete p;  // Always delete heap objects!
    return 0;
}