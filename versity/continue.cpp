
#include <iostream>
using namespace std;
int main()
{
    int num[5]={1,-2,3,-4,5};
    for(int i=0; i<5; i++)
    {
        if(num[i] < 0)
        {
            continue;
        }
        cout << num[i] << "*" << num[i] << "=" << num[i] * num[i] << endl;
    }
    return 0;
}
