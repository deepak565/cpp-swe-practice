//  1.find largest element in array

#include <iostream>

using namespace std;

void PrintArray(int arr[], int n){
    int largest = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] >= largest) {
            largest = arr[i];
        }
        cout<<"Elements in array "<<arr[i]<<endl;
    }
    cout<<"largest element in array is "<<largest<<endl;
}


int main() {
    
    int n = 5;
    int arr[n] = {11,2,36,9,10};
    PrintArray(arr, n);
    return 0;
}
