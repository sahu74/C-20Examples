#include<iostream>
using namespace std;
template <typename... Args>
void print(Args &&... args) {
    (void(cout << forward<Args>(args) << endl), ...);
}

int main() {
    auto variadic_generic_lambda = [](auto &&... param) {
        print(forward<decltype(param)>(param)...);
    };

    variadic_generic_lambda(1, "lol", 1.1);
    return EXIT_SUCCESS;
}