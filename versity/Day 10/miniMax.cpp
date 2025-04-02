

#include <iostream>
using namespace std;
int main()
{
    int A[5] = {30, 55, 45, 60, 78};
    int max= A[0];
    for(int i=0; i<5; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }
    cout << "max = " << max << endl;
    return 0;
}
