//  Reverse an array
#include <iostream>

using namespace std;
void reverse(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout<<"Array Element at index "<<i <<" "<<arr[i]<<endl;
    }
    // 1.using new second array
    int arrNew[n];
    for(int i= n-1 ;i>=0;i--){
        arrNew[n-1-i] = arr[i];
    }
    cout<<"**********After reverse**************"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"Array Element at index "<<i<<arrNew[i]<<endl;
    }


}
int main() {
    // int *arr = new int[5];
    int arr[] = {1,2,3,4,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Total size = "<<size<<endl;

    // for(int i=0; i<size; i++) {
    //     cin>>arr[i];
    // }

    reverse(arr, size);

    // delete arr;
    return 0;
}