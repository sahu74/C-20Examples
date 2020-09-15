// sourceSIOF3.cpp

constexpr int quad(int n) {
    return n * n;
}

constinit auto staticA  = quad(5);  // (2)
// mainSOIF3.cpp

#include <iostream>

extern constinit int staticA;     // (1)

auto staticB = staticA;

int main() {
    
    std::cout << std::endl;
    
    std::cout << "staticB: " << staticB << std::endl;
    
    std::cout << std::endl;
    
}

//! (1) declares the variable staticA. staticA (2) is initialized during compile-time. 
//!By the way, using constexpr in (1) instead of constinit is not valid, because constexpr requires a definition and not just a declaration
