

#include <iostream>
using namespace std;
int main()
{
    int A[5] = {30,55,45,60,78};
    int sum =0;
    for(int i=0 ; i<5; i++)
    {
        sum += A[i];
    }
    cout << "Sum of the arry = " << sum << endl;
    return 0;
}
