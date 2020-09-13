#include <iostream>
using namespace std;

 
template <class T, int size> // size is the non-type parameter
class StaticArray
{
private:
    // The non-type parameter controls the size of the array
    T m_array[size];
 
public:
    T* getArray();
	
    T& operator[](int index)
    {
        return m_array[index];
    }
};
 
// Showing how a function for a class with a non-type parameter is defined outside of the class
template <class T, int size>
T* StaticArray<T, size>::getArray()
{
    return m_array;
}
 
int main()
{
    // declare an integer array with room for 12 integers
    StaticArray<int, 12> intArray;
 
    // Fill it up in order, then print it backwards
    for (int count=0; count < 12; ++count)
        intArray[count] = count;
 
    for (int count=11; count >= 0; --count)
        std::cout << intArray[count] << " ";
    std::cout << '\n';
	return 0;
}