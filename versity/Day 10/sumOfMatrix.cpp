
#include <iostream>
using namespace std;

int main() 
{
    int M[2][3] = {{5, 10, 12}, {30, 24, 45}};
    int N[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int Sum[2][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            Sum[i][j] = M[i][j] + N[i][j];
        }
    }
    cout << "Sum of the matrices M and N:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}