// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <experimental/coroutine>
#include "generator.h"

cppcoro::generator<int> make_three_ints() {
    co_yield 0;
    co_yield 1;
    co_yield 2;
}

int main()  {
    for (auto i : make_three_ints()) {
        std::cout << i << std::endl;
    }
}

//  clang++ coroutines.cpp -Wall -Wextra -std=c++2a