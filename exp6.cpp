// Tiya Singh //
// PRN - 2370123144


#include <iostream>
using namespace std;

int main() {
    // Using for loop
    cout << "Using for loop: ";
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << "\n"; 

    // Using while loop
    cout << "Using while loop: ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << "\n"; 

    // Using do-while loop
    cout << "Using do-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 5);
    cout << "\n"; 

    return 0;
}