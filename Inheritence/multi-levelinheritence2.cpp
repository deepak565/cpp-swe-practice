// 3.Multi-level inheritence
// ==========================

#include <iostream>

using namespace std;

class Animal {
public:
    string name;
    Animal(string name) : name(name) {
        cout<<"Animal name is "<< name <<endl;
    }
    void display() {
        cout<<"This is Animal"<<endl;
    }
};

class Cat : public Animal {
public:
    string name;
    Cat(string name1) : name(name1), Animal(name1) {
        cout<<"Cat Name is  "<<name<<endl;
    }
    void display() {
        // display(); // This will call same class display multiple time so
        Animal::display();
        cout<<"This is Cat"<<endl;
    }
    
};

class RussianBlue  : public Cat{
public:
    string name;
    RussianBlue(string name1, string name2) : name(name1) , Cat(name2)
    {
        cout<<"Name of Russian Blue is "<< name <<endl;
    }
    void searching() {
            display();
    }
    
};

int main() {
    RussianBlue rb("Puppy", "chintu");
    rb.searching();
    return 0;
}