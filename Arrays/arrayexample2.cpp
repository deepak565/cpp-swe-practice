//  1.find smallest element in array

#include <iostream>

using namespace std;

void PrintArray(int arr[], int n){
    int smallest = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] <= smallest) {
            smallest = arr[i];
        }
        cout<<"Elements in array "<<arr[i]<<endl;
    }
    cout<<"smallest element in array is "<<smallest<<endl;
}


int main() {
    
    int n = 5;
    int arr[n] = {11,22,-36,9,-10};
    PrintArray(arr, n);
    return 0;
}