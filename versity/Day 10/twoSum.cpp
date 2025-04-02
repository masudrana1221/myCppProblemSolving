
#include <iostream>
using namespace std;

int main() 
{
    int A[5] = {30, 55, 45, 60, 78};
    int B[5] = {20, 10, 15, 60, 50};
    int Sum[5];
    for(int i = 0; i < 5; i++) 
        {
            Sum[i] = A[i] + B[i];
        }
    cout << "Sum of arrays A and B :" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << Sum[i] << " ";
    }
    cout << endl;

    return 0;
}