
#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int A[6] = {3, 9, 7, 5, 4, 2};
    int n = sizeof(A) / sizeof(A[0]);

    bubbleSort(A, n);

    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    // Output: 2 3 4 5 7 9
}