// Hierarichial inheritance 
// interfaces

#include <iostream>
using namespace std;


class Human {
public:
    Human() {}
	void breathing() { cout<< " I can breath " <<endl;}
	void work() { cout << " I can't work now " <<endl; }

};

class Youtuber : public Human {
public:
	void work () { cout << " I am working as Youtuber " <<endl; }
};

class Engineer : public Human {
public: 
	void work () { cout << " I am working as Engineer " << endl; }
};


class Doctor : public Human {
public:
	void work () { cout << " I am working as Doctor " <<endl; }

};

int main() {

Human h;
h.breathing();
h.work();

Youtuber y;
y.breathing();
y.work();

Engineer e;
e.breathing();
e.work();

Doctor d;
d.breathing();
d.work();
return 0;

}