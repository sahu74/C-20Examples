//! Designated Initializers
#include <cstddef>
#include <iostream>

struct A {
    int x;
    int y;
    int z = 123;
};

void f() {
    A a{ .x = 1, .z = 2 }; // a.x == 1, a.y == 0, a.z == 2
    std::cout << a.x << " " << a.y << " " << a.z << "\n";
}

int main()
{


    f();
}