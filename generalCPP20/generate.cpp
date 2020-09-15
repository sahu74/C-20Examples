#include <algorithm>
#include<vector>
#include<iostream>
using namespace std;

void fillVector(vector<int>& v)
{
    // A local static variable.
    static int nextValue = 0;

    // The lambda expression that appears in the following call to
    // the generate function modifies and uses the local static
    // variable nextValue.
    std::generate(v.begin(), v.end(), [] { return nextValue++; });

    //WARNING: this is not thread-safe and is shown for illustration only
}

int main()
{
    vector<int> v = { 11,22,1,3,44,231,90,53 };
    //vector<int> v(10);
    fillVector(v);
    for (int x : v)
        cout << " Value of Vector :" << v[x] << "\n";

    cout << v.size();
}