//threeWayComparison.cpp
You can define the three-way comparison operator or request it from the compiler with =default. 
In both cases you get all six comparison operators: ==, !=, <, <=, >, and >=.

// threeWayComparison.cpp

#include <compare>
#include <iostream>

struct MyInt {
    int value;
    explicit MyInt(int val): value{val} { }
    auto operator<=>(const MyInt& rhs) const {           // (1)      
        return value <=> rhs.value;
    }
};

struct MyDouble {
    double value;
    explicit constexpr MyDouble(double val): value{val} { }
    auto operator<=>(const MyDouble&) const = default;   // (2)
};

template <typename T>
constexpr bool isLessThan(const T& lhs, const T& rhs) {
    return lhs < rhs;
}

int main() {
    
    std::cout << std::boolalpha << std::endl;
    
    MyInt myInt1(2011);
    MyInt myInt2(2014);
    
    std::cout << "isLessThan(myInt1, myInt2): "
              << isLessThan(myInt1, myInt2) << std::endl;
              
    MyDouble myDouble1(2011);
    MyDouble myDouble2(2014);
    
    std::cout << "isLessThan(myDouble1, myDouble2): "
              << isLessThan(myDouble1, myDouble2) << std::endl;          
              
    std::cout << std::endl;
              
}