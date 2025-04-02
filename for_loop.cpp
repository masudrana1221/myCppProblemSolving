
#include <iostream>
using namespace std;

int main() {
    int sum = 0; // Initialize sum to 0

    // Use a for loop to iterate from 1 to 9

    for (int i = 1; i <= 9; i++) 
    {
        sum += i * i; // Add the square of i to the sum
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}