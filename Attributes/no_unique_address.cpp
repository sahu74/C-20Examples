// empty class ( No state!) 
struct Empty { 
}; 
  
struct X { 
    int i; 
    Empty e; 
}; 
  
struct Y { 
    int i; 
    [[no_unique_address]] Empty e; 
}; 

int main() 
{ 
    // the size of any object of 
    // empty class type is at least 1 
    static_assert(sizeof(Empty) >= 1); 
  
    // at least one more byte is needed 
    // to give e a unique address 
    static_assert(sizeof(X) >= sizeof(int) + 1); 
  
    // empty base optimization applied 
    static_assert(sizeof(Y) == sizeof(int)); 
} 