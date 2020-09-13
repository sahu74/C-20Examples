#include <iostream>
using namespace std;

consteval int sqr(int n) {
  return n * n;
}


int main()
{

constexpr int r = sqr(100); // OK
 int x = 10;
int r2 = sqr(x); // ERROR: the value of 'x' is not usable in a constant expression
                 // OK if `sqr` were a `constexpr` function

cout<<r2;
}