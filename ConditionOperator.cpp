#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b, max, Maxnumber;
    cin >> a >> b;
    // General if elas Condition
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout << "Max Number Is: " << max << endl;

    // ternary operator

    Maxnumber = a > b ? a : b;

    cout << "Max Number Is: " << Maxnumber << endl;

    return 0;
}