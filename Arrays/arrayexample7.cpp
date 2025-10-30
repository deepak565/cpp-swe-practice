//  count even and odd numbers

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int even = 0;
    int odd = 0;
    size_t size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if((arr[i]%2) == 0) {
            cout<<"even element = "<<arr[i]<<endl;
            even++;
        } else {
            odd++;
        }
    }
    std::cout<<"Total even Elements = "<<even<<std::endl;
    std::cout<<"Total Odd Elements = "<<odd<<std::endl;

    return 0;
}

// | Aspect               | Complexity | Explanation                                               |
// | :------------------- | :--------- | :-------------------------------------------------------- |
// | **Time Complexity**  | **O(n)**   | Loop runs `n` times, checking each element once.          |
// | **Space Complexity** | **O(1)**   | Uses only a few extra variables regardless of input size. |
