
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    bool isPrime = true;
    for(int i=2; i<number; i++)
    {
        if((number % i) == 0)
            {
                cout << number << " is not Prime " << endl;
                isPrime= false;
                    break;
            }
    }
    if(isPrime)
    {
        cout << number << " is Prime " << endl;
    }
    return 0;
}
 