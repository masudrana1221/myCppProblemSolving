
#include <iostream>
using namespace std;


void sort(int *arr, int length) {
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[6] = {3, 9, 7, 5, 4, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    sort(arr, length);

    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    
}

// this 