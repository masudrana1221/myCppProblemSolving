
#include <iostream>
using namespace std;

void sortDecreasing(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
        {
            for (int j = 0; j < size - i - 1; j++) 
                {
                    if (arr[j] < arr[j + 1]) 
                        {
                            swap(arr[j], arr[j + 1]);
                        }
                }
        }
}

int main() 
{
    int arr[] = {3, 11, 4, 25, 8, 17, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortDecreasing(arr, size);

    cout << "Sorted in decreasing order: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}