#include <iostream> 
#include <string> 
  
int main() 
{ 
  
    // Set debug mode in compiler or 'R' 
    [[maybe_unused]] char mg_brk = 'D'; 
  
    // Compiler does not emit any warnings 
    // or error on this unused variable 
} 

/*

If we dont use "maybe_unused", then we will ger below warning from compiler.

main.cpp: In function 'int main()':
main.cpp:8:11: warning: unused variable 'mg_brk' [-Wunused-variable]
    8 |      char mg_brk = 'D';
	
*/