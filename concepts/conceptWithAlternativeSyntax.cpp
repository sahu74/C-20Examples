// placeholdersDraft.cpp

#include <iostream>
#include <type_traits>
#include <vector>
#include<concepts>
using namespace std;
struct Dog {};

struct Husky : public Dog {};
struct Poodle :public Dog {};

template<class T>
struct is_husky {
	static constexpr bool result = false;
};
template<>
struct is_husky<Husky> {
	static constexpr bool result = true;
};

template<typename T>
concept  ExceptHusky = !is_husky<T>::result; // If T is husky, this concept returns false


template<ExceptHusky T>
void DogCanBeSmartExceptHusky(const T&& dog) {};



//also works. This is for multiple require expressions, they can use ||, &, ! such operators to join
template<class T> 
//requires ExceptHusky<T>
//! like below too we can write
requires is_husky<T>::result
void DogCanBeSmartExceptHusky_1(const T&& dog) {};



int main()
{
	DogCanBeSmartExceptHusky(Poodle{});
	//DogCanBeSmartExceptHusky(Husky{});
	// Error message here: 
	// constraints not satisfied
	//'!(is_husky<Husky>::result)' evaluated to false
}