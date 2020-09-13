// helloworld.cpp
export module helloworld;  // module declaration
import <iostream>;         // import declaration
 
export void hello() {      // export declaration
    std::cout << "Hello world!\n";
}
// main.cpp
import helloworld;  // import declaration
 
int main() {
    hello();
}