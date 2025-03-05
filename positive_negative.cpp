
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cin >> number;
    if(number>0)
    {
        cout << "It is Positive." << endl;
    }
    else if(number<0)
    {
        cout << "it is Negative." << endl;
    }
    else{
        cout << "It is Zero." << endl;
    }
    return 0;
}
