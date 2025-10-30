//  Reverse a string

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Deepak";

    int count =0;
    for(char c : s) {
        count++;
    }

    string n(s.size(), ' '); // initialize with proper size
    for(int i=count-1; i>=0; i--) {
        n[count-1-i] = s[i];
    }

    for(char c : n) {
        cout<<c;
    }
    return 0;
}