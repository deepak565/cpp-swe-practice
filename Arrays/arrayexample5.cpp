//  Avergae of elements

#include <iostream>

using namespace std;

void average(int arr[], int n) {
    int total = 0;
    for(int i=0;i<n;i++) {
        total = total + arr[i];
    }
    cout<<"Average of elements = "<<static_cast<double>(total)/n<<endl;
}

int main() {
    int arr[] = {1,2};

    size_t size = sizeof(arr)/sizeof(arr[0]);

    average(arr,size);

    return 0;
}