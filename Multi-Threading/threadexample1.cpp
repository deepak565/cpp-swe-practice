#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

unsigned long long EvenSum = 0;
unsigned long long OddSum = 0;

// Function to find sum of even numbers
void findEven(unsigned long long start, unsigned long long end) {
    for (unsigned long long i = start; i <= end; ++i) {
        if (i % 2 == 0)
            EvenSum += i;
    }
}

// Function to find sum of odd numbers
void findOdd(unsigned long long start, unsigned long long end) {
    for (unsigned long long i = start; i <= end; ++i) {
        if (i % 2 != 0)
            OddSum += i;
    }
}

int main() {
    unsigned long long start = 0, end = 1000000000; // 1 billion


   // Single-threaded
auto st1 = high_resolution_clock::now();
findOdd(start, end);
findEven(start, end);
auto st2 = high_resolution_clock::now();
cout << "Single-threaded time: " 
     << duration_cast<seconds>(st2 - st1).count() << "s\n";

// Reset results
OddSum = 0; EvenSum = 0;

// Multi-threaded
auto mt1 = high_resolution_clock::now();
thread t1(findOdd, start, end);
thread t2(findEven, start, end);
t1.join(); t2.join();
auto mt2 = high_resolution_clock::now();
cout << "Multi-threaded time: " 
     << duration_cast<seconds>(mt2 - mt1).count() << "s\n";


    return 0;
}


//same example with pthread

// #include <iostream>
// #include <pthread.h>
// #include <chrono>

// using namespace std;
// using namespace std::chrono;

// unsigned long long EvenSum = 0;
// unsigned long long OddSum = 0;

// struct Range {
//     unsigned long long start;
//     unsigned long long end;
// };

// // Function to find sum of even numbers
// void* findEven(void* arg) {
//     Range* range = (Range*)arg;
//     unsigned long long sum = 0;

//     for (unsigned long long i = range->start; i <= range->end; ++i) {
//         if (i % 2 == 0)
//             sum += i;
//     }

//     EvenSum = sum;
//     pthread_exit(nullptr);
// }

// // Function to find sum of odd numbers
// void* findOdd(void* arg) {
//     Range* range = (Range*)arg;
//     unsigned long long sum = 0;

//     for (unsigned long long i = range->start; i <= range->end; ++i) {
//         if (i % 2 != 0)
//             sum += i;
//     }

//     OddSum = sum;
//     pthread_exit(nullptr);
// }

// int main() {
//     unsigned long long start = 0, end = 190000000;
//     Range range = {start, end};

//     pthread_t t1, t2;

//     auto startTime = high_resolution_clock::now();

//     // Create two threads
//     pthread_create(&t1, nullptr, findOdd, &range);
//     pthread_create(&t2, nullptr, findEven, &range);

//     // Wait for both threads to finish
//     pthread_join(t1, nullptr);
//     pthread_join(t2, nullptr);

//     auto stopTime = high_resolution_clock::now();
//     auto duration = duration_cast<microseconds>(stopTime - startTime);

//     cout << "Odd Sum  : " << OddSum << endl;
//     cout << "Even Sum : " << EvenSum << endl;
//     cout << "Time Taken: " << duration.count() / 1000000.0 << " seconds" << endl;

//     return 0;
// }
