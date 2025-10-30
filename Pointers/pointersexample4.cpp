#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Dinesh;

class Sandhya {
public:
    std::weak_ptr<Dinesh> dinesh;
    Sandhya() {
        cout << "Sandhya PG Constructor" << endl;
    }
    ~Sandhya() {
        cout << "Sandhya PG Destructor" << endl;
    }
    void ownerName(bool stop = false) {
        std::string name = "Sandhya";
        cout << "Sandhya PG OwnerName: " << name << endl;
        if (!stop) {
            if (auto d = dinesh.lock()) {
                d->ownerName(true);  // prevent infinite loop
            }
        }
    }
};

class Dinesh {
public:
    std::shared_ptr<Sandhya> sandhya;
    Dinesh() {
        cout << "Dinesh PG Constructor" << endl;
    }
    ~Dinesh() {
        cout << "Dinesh PG Destructor" << endl;
    }
    void ownerName(bool stop = false) {
        std::string name = "Dinesh";
        cout << "Dinesh PG Owner Name: " << name << endl;
        if (!stop && sandhya) {
            sandhya->ownerName(true);  // prevent infinite loop
        }
    }
};

int main() {
    std::shared_ptr<Sandhya> sandhyaptr = std::make_shared<Sandhya>();
    std::shared_ptr<Dinesh> dineshptr = std::make_shared<Dinesh>();

    sandhyaptr->dinesh = dineshptr;
    dineshptr->sandhya = sandhyaptr;

    cout << "--- Sandhya Calls Dinesh ---" << endl;
    sandhyaptr->ownerName();

    cout << "--- Dinesh Calls Sandhya ---" << endl;
    dineshptr->ownerName();

    return 0;
}
