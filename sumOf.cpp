
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    double sum = 0.0;

    while (i <= 9) {
        sum += 1.0 / (1 + 2 * i);
        i++;
    }

    cout << "The sum of : " << sum << endl;

    return 0;
}


