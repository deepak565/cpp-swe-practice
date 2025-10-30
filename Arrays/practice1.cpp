#include <iostream>

using namespace std;

int main() {
    int *arr = new int[5];
    for(int i=0;i<5;i++) {
        cin>>arr[i];
    }
    cout<<"**************************"<<endl;
    for(int i=0;i<5;i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    cout<<arr<<endl;
    cout<<endl;
    cout<<*(arr);
    cout<<endl;
    int *p = arr;
    cout<<*(p + 1);
    
    delete arr;
    return 0;
}