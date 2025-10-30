//  copy one array to another

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,33,4,5};
    int newArr[5];
    for(int i=0;i<5;i++) {
        newArr[i] = arr[i];
    }
    for(int i=0;i<5;i++) {
        cout<<newArr[i]<<endl;
    }
    return 0;
}
// | Complexity Type      | Value    | Reason                                                                               |
// | -------------------- | -------- | ------------------------------------------------------------------------------------ |
// | **Time Complexity**  | **O(n)** | You loop `n` times to copy all elements.                                             |
// | **Space Complexity** | **O(1)** | You only use a fixed extra array (newArr), no dynamic or additional data structures. |
// Option2:
// #include <algorithm>

// std::copy(arr, arr + 5, newArr);

// ✔ Clean and standard.
// ✔ Works for all array types (primitive or objects).
// ✔ Recommended for production-quality code.

// Option3:
// #include <cstring>
// memcpy(newArr, arr, sizeof(arr));
// ✔ Very fast.
// ❌ Unsafe for non-trivial objects (like std::string, std::vector, etc.).


// std::array<int, 5> arr = {1,2,3,4,5};
// std::array<int, 5> newArr = arr; // ✅ Works!

// std::array is a real class in C++ (introduced in C++11).
// It overloads the assignment operator and defines a copy constructor.
// Therefore, newArr = arr; performs element-wise copy internally.
// That’s why this works:
// ✅ std::array behaves like an STL container (supports assignment).
// ❌ C-style arrays don’t — they are just raw memory.