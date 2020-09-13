#include <iostream>
#include<vector>
using namespace std;



int main() {
    int x = 100, y = 200;

    auto print = [&] { // Capturing everything by reference(not recommended though)
        cout << __PRETTY_FUNCTION__ << " : " << x << " , " << y << endl;
    };

    print();
    return EXIT_SUCCESS;
}
/* Output
main()::<lambda()> : 100 , 200
*/