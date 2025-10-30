//  1. Raw Pointer vs Smart Pointer Initialization
// Task:
// Write two functions:

// One that creates a dynamic array of integers using raw pointers, initializes it, and cleans it up manually.

// Another that does the same using shared_ptr<int[]> or a custom deleter with shared_ptr.

// Goal: Demonstrate memory safety differences between raw and smart pointer usage.

#include <iostream>
#include <memory>

using namespace std;

class SPointer {
public:
    SPointer() {}
    ~SPointer() { cout<<"Destructor called for SPointer class"<<endl; }
    void rawPointer() {
        int *arr = new int[10];
        for(int i = 0; i< 10; i++) {
            cin>>arr[i];
        }
        
        for(int i = 0; i< 10; i++) {
            cout<<arr[i]<<endl;
        }
        
        delete[] arr;
    }
    void smartPointer() {
        cout<<"SmartPointer Funtion"<<endl;
        std::shared_ptr<int[]> arr(new int[10]);
         for(int i = 0; i< 10; i++) {
            cin>>arr[i];
        }
        
        for(int i = 0; i< 10; i++) {
            cout<<arr[i]<<endl;
        }
    }
    
};

int  main() {
    
    SPointer *rp = new SPointer();
    rp->rawPointer();
    delete rp;
    
    SPointer sp;
    sp.smartPointer();
    
    return 0;
}