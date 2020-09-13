#include<iostream>
#include<span>
#include<algorithm>
#include<vector>
using namespace std;

// std::span
//! A span is a view (i.e. non-owning) of a container providing bounds-checked access to a contiguous group of elements. 
//! Since views do not own their elements they are cheap to construct and copy -- 
//! a simplified way to think about views is they are holding references to their data. Spans can be dynamically-sized or fixed-sized.


void f(std::span<int> ints) {
	std::for_each(ints.begin(), ints.end(), [](auto i) {
		cout << " i :" << i << endl;
	});
}

int main()
{
	std::vector<int> v = { 1, 2, 3 };
	f(v);
}