
//! Class types in non-type template parameters
#include <iostream>

using namespace std;

struct foo {
    int aa=300;
	foo() = default;
	constexpr foo( int a) {
	    aa=a;
	}
};

template <foo f>
auto get_foo() {
    cout<<f.aa<<"\n";;
	return f;
}


int main()
{

get_foo<foo{}>(); // uses implicit constructor
get_foo < foo{ 123 } > ();

}