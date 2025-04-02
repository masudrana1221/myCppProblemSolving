
#include <iostream>
using namespace std;
int main()
{
    int M[2][3]= {{5,10,12}
                 {30,24,45}};
    int sum =0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
            {
                sum += M[i][j];
            }
    }
    cout << "Sum =" << sum << endl;
    return 0;
}
