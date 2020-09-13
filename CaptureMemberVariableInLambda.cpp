#include<iostream>
using namespace std;

class Example {
    int m_var;
  public:
    Example() : m_var(10) {}
    void func() {
	//! we can use this,=,&
        [this]() { cout << m_var << endl; }(); // IIFE
    }
};

int main() {
    Example e;
    e.func();
    return EXIT_SUCCESS;
}