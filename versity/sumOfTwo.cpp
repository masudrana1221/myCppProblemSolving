
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <iostream>

int main() 
{
    int M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int N[3][3] = {{11,12,13}, {14,15,16}, {17,18,19}};
    int C[3][3];
    
    int sum =0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum += M[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum += N[i][j];
        }
    }
    cout << "Sum =" << sum << endl;

    return 0;
}