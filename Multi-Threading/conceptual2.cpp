//  Different ways of creating threads in c++11
// There are 5 different ways to create threads in c++11

//  NOTE
//  if we create multiple threads at same time it doesn't guarante which one will start first

// 1. Function Pointer
// This is very basic form of thread creation

// void fun(int x){
//     while (x --> 0) {
//         cout<< x << endl;
//     }
// }

// int main() {
//     std::thread t(fun, 10);
//     t.join();
//     return 0;
// }

//  2.1 Lambda Funtion

// int main() {
    // auto lambdaFun = [](int x) {
    //     while(x --> 0) {
    //         std::cout<< x <<std::endl;
    //     }
    // };

    // std::thread t(lambdaFun , 10);
    // t.join();
    // return 0;
// }

// 2.2 we can directly inject lambda function at thread creation time

// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std;
// using namespace std::chrono;

// int main() {


//     std::thread t([](int x) {
//         while(x --> 0) {
//             std::cout<< x << std::endl;
//         }
//     }, 10);
//     t.join();

//     return 0;
// }

// 3. Functor (Function object)

// class Base{
// public:
//     void operator() (int x) {
//         while(x--> 0){
//             cout<< x << endl;
//         }
//     }
// };

// int main() {
//     std::thread t((Base()),10);
//     t.join();
//     return 0;
// }

// 4. Non-static Member Function

// class Base {
// public:
//     void run(int x) {
//         while(x--> 0){
//             cout<< x << endl;
//         }
//     }
// };

// int main() {
//     Base b;
//     std::thread t(&Base::run, &b, 10);
//     t.join();
//     return 0;
// }


// 5. Static Member Funtion
// class Base {
// public:
//     static void run(int x) {
//         while(x--> 0){
//             cout<<x<<endl;
//         }
//     }
// };

// int main() {
//     std::thread t(&Base::run, 10);
//     t.join();
//     return 0;
// }