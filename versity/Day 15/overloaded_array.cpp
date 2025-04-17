
#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int array[10] = {10, 3, 11, 22, 43, 67, 98, 26, 76, 55};
    
    int max = findMax(array, 10);
    
    cout << "The maximum value: " << max << endl;
    
    return 0;
}