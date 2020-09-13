#include <iostream> 
#include <string> 
  
// Return value must be utilized by the caller 
[[nodiscard]] int f() 
{ 
    return 0; 
} 
  
class[[nodiscard]] my_class{}; 
  
// Automatically becomes nodiscard marked 
my_class fun() 
{ 
    return my_class(); 
} 
int main() 
{ 
    int x{ 1 }; 
  
    // No error as value is utilised 
    // x= f(); 
  
    // Error : Value is not utilised 
    f(); 
  
    // Value not utilised error 
    // fun() ; 
    return x; 
}

/*
prog.cpp:5:21: warning: 'nodiscard' attribute directive ignored [-Wattributes]
 [[nodiscard]] int f()
                     ^
prog.cpp:10:20: warning: 'nodiscard' attribute directive ignored [-Wattributes]
 class[[nodiscard]] my_class{};

*/