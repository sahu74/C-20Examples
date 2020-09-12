#include<concepts>
#include<iostream>

#include <type_traits>
using namespace std;
template<bool WithDefaultCtor>
class ClassWithOptionalDefaultCtor1
{
public:
    template<typename std::enable_if<WithDefaultCtor, int>::type = 0>
    ClassWithOptionalDefaultCtor1()  //1  we cannot say = default here
    {
        cout << "ClassWithOptionalDefaultCtor called\n ";
    }
};

//C++20 lets us rewrite the code from before into this:
/*
That is truly beautiful code! Please notice at first, that the type_traits include is gone, as the ugly enable_if. 
That alone brings you a compile-time speedup. Whether it is noticeable is a different question. 
It also might go away, if the requires-condition gets more complex and requires concepts.
*/
template<bool WithDefaultCtor>
class ClassWithOptionalDefaultCtor
{
public:
    ClassWithOptionalDefaultCtor() requires(WithDefaultCtor) = default;  
};


int main()
{
    ClassWithOptionalDefaultCtor<true> t{};
}


