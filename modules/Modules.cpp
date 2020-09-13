#include <iostream>
#include <string_view>
export module hello;
export void greeter (std::string_view const &name)
{
  std::cout << "Hello " << name << "!\n";
}
and put the following in main.cc:

import hello;
int main (void)
{
  greeter ("world");
  return 0;
}