// placeholdersDraft.cpp

#include <iostream>
#include <type_traits>
#include <vector>
#include<concepts>
using namespace std;

template<typename T>                                   // (1)
concept Integral = std::is_integral<T>::value;


Integral auto getIntegral(int val) {                    // (2)
    return val;
}
class A {};


int main() {

    std::cout << std::boolalpha << std::endl;

    std::vector<int> vec{ 11, 22, 33, 44, 55 };
    for (Integral auto i : vec) 
        std::cout << i << " ";                          // (3)

    Integral auto b = true;                            // (4)
    std::cout << b << std::endl;

    Integral auto integ = getIntegral(10);             // (5)
    std::cout << integ << std::endl;

    auto integ1 = getIntegral(12.90);                     // (6)
    std::cout << integ1 << std::endl;

  // Integral auto aa = A();
	// std::cout << aa << std::endl; // This will cause error.
    std::cout << std::is_integral<A>::value << '\n';
 
    std::cout << std::endl;

}