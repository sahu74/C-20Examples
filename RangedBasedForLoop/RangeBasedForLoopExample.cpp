
#include <cstddef>
#include <iostream>
#include<vector>


int main()
{
    
for (auto v = std::vector{1, 2, 3}; auto& e : v) {
  std::cout << e;
}
}