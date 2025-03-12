
#include <iostream>
using namingspace std;

// Probleam : Multiplay 10*1 (10*9*8*7*6*5*4*3*2*1)
int main() {
    int factorial = 1;
    for (int i = 10; i >= 1; --i) {
        factorial *= i;
    }
    
    cout << " the number is  = " << factorial << endl;
    return 0;
}