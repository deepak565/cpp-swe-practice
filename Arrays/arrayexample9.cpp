// Find the second largest element

#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[5] = {4,4,4,4,4};

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i = 0; i<5; i++) {
        if(arr[i]>largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
    cout<<"SecondLargest = "<<secondlargest<<endl;

    return 0;
}