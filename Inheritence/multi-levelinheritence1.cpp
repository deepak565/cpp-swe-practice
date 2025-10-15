// 3.Multi-level inheritence
// ==========================

// 3.Multi-level inheritence
// ==========================

#include <iostream>

using namespace std;

class Animal {
public:
    string name;
    Animal(string name1) : name(name1) {
        cout<<"Animal name is "<< name <<endl;
    }
    void display() {
        cout<<"This is Animal"<<endl;
    }
};

class Cat : public Animal {
public:
    string name;
    Cat(string name1, string name2) : name(name1), Animal(name2) {
        cout<<"Cat Name is  "<<name<<endl;
    }
    void show() {
        cout<<"This is Cat"<<endl;
    }
    
};

class RussianBlue  : public Cat{
public:
    string name;
    RussianBlue(string name1, string name2, string name3) : name(name1) , Cat(name2, name3)
    {
        cout<<"Name of Russian Blue is "<< name <<endl;
    }
    void searching() {
            display();
            show();
    }
    
};

int main() {
    RussianBlue rb("Puppy", "chintu","snoopy");
    rb.searching();
    return 0;
}