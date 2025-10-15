// 5. Mixing Public and Private Inheritance
// Create a class Admin inherited publicly from User, and Security inherited privately from User. Now create SuperAdmin inherited from both. Which members are accessible?

// 🔧 Goal: Understand access control rules in multiple inheritance.


#include <iostream>
using namespace std;

class User {
public:
    int u = 10;
};

class Admin : public User {
public:
    int a;

    Admin() {
        a = u;  // u is public in Admin (from public inheritance)
    }
};

class Security : private User {
public:
    int s;

    Security() {
        s = u;  // u is private in Security, but accessible inside the class
    }

    int getSecurityValue() {
        return u;  // still accessible inside the class
    }
};

class SuperAdmin : public Admin, public Security {
public:
    int saAdmin;
    int saSecurity;

    SuperAdmin() {
        saAdmin = a;
        saSecurity = s;
        cout << "Inside SuperAdmin constructor:" << endl;
        cout << "saAdmin: " << saAdmin << endl;
        cout << "saSecurity: " << saSecurity << endl;
    }
};

int main() {
    SuperAdmin sa;

    cout << "\nFrom main():\n";
    cout << "Accessing Admin's 'a': " << sa.a << endl;         // ✅ OK (public)
    cout << "Accessing Security's 's': " << sa.s << endl;     // ✅ OK (public)

    // cout << sa.Security::u << endl; // ❌ Error: 'u' is private in Security

    // To access 'u' from Security, use a public getter method
    cout << "Accessing 'u' via Security's getter: " << sa.getSecurityValue() << endl;

    // Accessing 'u' via Admin (public inheritance)
    cout << "Accessing 'u' via Admin: " << sa.Admin::u << endl;

    return 0;
}
