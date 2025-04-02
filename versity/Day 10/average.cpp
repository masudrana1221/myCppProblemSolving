#include <iostream>
using namespace std;
int main()
{
    int A[5] = {30,55,45,60,78};
    int sum =0;
    float average;
    for(int i=0 ; i<5; i++)
    {
        sum += A[i];
        average = sum / 5.0;
    }
    cout << "Sum of the arry = " << sum << endl;
    cout << "Sum of the Average = " << average << endl;
    return 0;
}
