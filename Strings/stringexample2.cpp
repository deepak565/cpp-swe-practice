//   find length of string manually
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello World!";
    int count = 0;
    // for(char c : s) {
    //     count++;
    // }
    cout<<"Length of string "<<count<<endl;

    char ch[] = "Deepak\0";
    int length = 0;
    while(ch[length] != '\0') {
        length++;
    }
    cout<<"lenght of string is = "<<length<<endl;
    return 0;
}