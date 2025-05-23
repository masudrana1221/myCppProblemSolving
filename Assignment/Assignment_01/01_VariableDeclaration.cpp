
#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. A floating point number
    float num1 = 567.123;

    // 2. A character
    char ch = 'F';

    // 3. An integer
    int num2 = 1000;

    // 4. A string
    string message = "Welcome to Chine!";

    // 5. A float array
    float numbers[] = {7, 2, 0.3f, -1, 5.5};

    // 6. A character array (some characters by ASCII code)
    char mixed[] = {'a', 'H', 72, 99}; // 72 = 'H', 99 = 'c'

    // 7. An array of strings
    string names[] = {"Smith", "Jack", "David"};

    // ----------- Printing All Values ------------

    cout << "Float value: " << num1 << endl;
    cout << "Character value: " << ch << endl;
    cout << "Integer value: " << num2 << endl;
    cout << "String message: " << message << endl;

    cout << "\nFloat array values: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\nCharacter/ASCII mixed array values: ";
    for (int i = 0; i < 4; i++) {
        cout << mixed[i] << " ";
    }

    cout << "\n\nNames array values: ";
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " ";
    }

    cout << endl;
    return 0;
}