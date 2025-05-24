#include <iostream>
#include <string>

using namespace std;

class Parent
{
    int age;
    string name;

public:
    Parent(int a, string n) : age(a), name(n) {}
    void display()
    {
        cout << "Parent Age is : " << age << endl;
        cout << "Parent name is : " << name << endl;
    }
};

class child : public Parent {
    float weight;
    string name;
public:
    child(int a, string name, float weight, string n) : Parent(a, name), weight(weight), name(n) {}
    void display()
    {
        cout << "child weight is :" << weight << endl;
        cout << "child name is : " << name << endl;
    }
};

int main()
{

    child ch(45, "Madhavi", 82.4, "Manikanta");
    ch.Parent::display();
    ch.display();
    return 0;
}
