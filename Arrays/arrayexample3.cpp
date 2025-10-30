//  1.find total sum of element in array

#include <iostream>

using namespace std;

void PrintArray(int arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++) {
        total = total + arr[i];
        cout<<"Elements in array "<<arr[i]<<endl;
    }
    cout<<"Total sum of element in array is "<<total<<endl;
}


int main() {
    
    int n = 5;
    int arr[n] = {1,2,6,-9,-100};
    PrintArray(arr, n);
    return 0;
}