// 2. Constructor Order
// Create two base classes Logger and FileHandler, each with a constructor that prints a message. Inherit them into a class SystemMonitor. Observe the constructor call order.

// 🔧 Goal: Learn constructor call order in multiple inheritance.


#include <iostream>

using namespace std;


class Logger {
    public:
        Logger() {
            cout<<"This is Logger constructor"<<endl;
        }
};

class FileHandler {
    public:
        FileHandler() {
            cout<<"This is FileHandler constructor"<<endl;
        }
};

class SystemMonitor : public FileHandler, public Logger {
    public:
        SystemMonitor() {
            cout<<"This is SystemMonitor Constructor"<<endl;
        }
};

int main() {
    SystemMonitor sm;
    
    return 0;
}

