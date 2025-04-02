
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num ;
    for(int i=1; i <=10 ; i++)
    {
        if(i%2==0)
            {
                cout << i << " is Even Number" << endl;
            }
        else{
                cout << i << " is Odd Number" << endl;
            }
    }
 
    return 0;
}
