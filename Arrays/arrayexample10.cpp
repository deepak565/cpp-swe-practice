//  10.  Check if array is sorted

#include <iostream>
using namespace std;

bool checkArrayIsSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i+1])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 1};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array is: " << size << endl;
    bool isSorted = true;
    isSorted = checkArrayIsSorted(arr, size);

    if (isSorted)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }
    return 0;
}