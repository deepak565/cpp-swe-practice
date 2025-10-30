#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

class ListExample{
public:
    std::list<std::string> l1;
    ListExample(std::list<std::string> list1) : l1(list1)  {}
    void display() {
        l1.push_back("MANDY");
        auto it = std::find(l1.begin(), l1.end(), "RANDY");
        if (it != l1.end()) {
            std::cout<<"Name present"<<std::endl;
        } else {
            std::cout<<"Name not Present"<<std::endl;
        }
    }
    
    
};

int main() {
    std::list <std::string> list;
    list.push_back("Deepak");
    list.push_back("Sai");
    list.push_back("ANKU");
    ListExample le1(list);
    le1.display();
    
    return 0;
}