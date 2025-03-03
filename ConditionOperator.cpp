#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b, max;
    cin >> a >> b;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout << "Max Number Is: " << max;
    return 0;
}