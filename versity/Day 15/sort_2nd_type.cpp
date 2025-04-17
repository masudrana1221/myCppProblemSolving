#include <iostream>
using namespace std;

void bubbleSort(int *arr, int length) 
{
    for(int i = 0; i < length; i++) 
    {
        for(int j = 0; j < length - i; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() 
{
    int arr[6] = {3, 9, 7, 5, 4, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, length);

    for(int i = 0; i < length; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}