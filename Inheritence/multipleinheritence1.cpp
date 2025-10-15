#include <iostream>

using namespace std;

class Father {
    int age;
    string name;
public:
    Father(int age, string name) : age(age) , name(name) {}
    void display() {
        cout<<"Father Name is : "<<name<<endl;
        cout<<"Father Age is : "<<age<<endl;
    }
    void show() {
        cout<<"This is Father class "<<endl;
    }
    
};


class Mother {
    int age;
    string name;
public:
    Mother(int age, string name) : age(age), name(name) {}
    void display() {
        cout<<"Mother Name is : "<<name<<endl;
        cout<<"Mother Age is : "<<age<<endl;
    }
    void visible() {
        cout<<"This is Mother class"<<endl;
    }
    
};


class Son : public Father, public Mother {
    int age;
    string name;
public:
    Son(int age, string name, int fatherAge, string fatherName, int motherAge, string motherName) : age(age), name(name) , Father(fatherAge, fatherName), Mother(motherAge, motherName) {}
    void display() {
        cout<<"Son Name is : "<<name<<endl;
        cout<<"Son Age is : "<<age<<endl;  
    }
    void view() {
        cout<<"This is Son Class "<<endl;
    }
    
};

int main() {
    
    Son s(27, "Chimakurthi Manikanta Deepak", 62, "Srinivasa rao", 55, "Madhavi");
    
    
    // Type1
    // s.Father::display();
    // s.Mother::display();
    s.display();
    // s.view();
    // cout<<"================="<<endl;
    
    // Type2 object slicing
    //=====================
    // Mother m = s;
    // m.display();
    // s.visible();
    
    // Father f = s;
    // f.display();
    // f.show();
    cout<<"================="<<endl;
    // Type3 casting
    static_cast<Father>(s).display();
    cout<<"================="<<endl;
    static_cast<Mother>(s).display();
    
    return 0;
}