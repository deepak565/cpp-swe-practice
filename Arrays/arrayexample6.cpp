//  search an element linearly

#include <iostream>
using namespace std;

void search(int arr[], int n, int key) {
    int newarr[n];
    int k =0;
    for(int i=0;i<n;i++){
        if(arr[i] == key) {
            newarr[k] = i;
            k++;
        }
    }
    if(k == 0) {
        cout<<"Value not present in array"<<endl;
    }
    for(int i = 0; i<k; i++) {
        cout<<"present at index = "<<newarr[i]<<endl;
    }
}

int main() {
    int arr[] = {1,2,3,3,4,5};
    int val = 5;
    size_t size = sizeof(arr)/sizeof(arr[0]);
    search(arr, size, val);
    return 0;
}