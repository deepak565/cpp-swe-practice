#include<iostream>
#include<memory>

using namespace std;

class Dinesh;

class Sandhya {
public:
    std::shared_ptr<Dinesh> dinesh;
    Sandhya() {cout<<"Sandhya PG Constructor"<<endl;}
    ~Sandhya() {cout<<"Sandhya PG Destructor"<<endl;}
    void ownerName() {
        std::string name = "Sandhya";
        cout<<"Sandhya PG OwnerName :"<<name<<endl;
        if(dinesh) {
            dinesh->ownerName();
        }
    }
};

class Dinesh {
public:
    std::weak_ptr<Sandhya> sandhya;
    Dinesh() {cout<<"Dinesh PG Constructor"<<endl;}
    ~Dinesh() {cout<<"Dinesh PG Destructor"<<endl;}
    void ownerName() {
        std::string name = "Dinesh";
        cout<<"Dinesh PG Owner Name :"<<name<<endl;
        if(auto s = sandhya.lock())
        s->ownerName();
    }
    
};

int main() {
    std::shared_ptr<Sandhya> sandhyaptr = std::make_shared<Sandhya>();
    std::shared_ptr<Dinesh> dineshptr = std::make_shared<Dinesh>();
    
    sandhyaptr->dinesh = dineshptr;
    dineshptr->sandhya = sandhyaptr;
    
    sandhyaptr->ownerName();
    cout<<"================================"<<endl;
    dineshptr->ownerName();
    
    return 0;
}