
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int physical, mind;
    cin >> physical, mind;
    if(physical && mind == 1)
    {
        cout << "Your health condition is good. so go and study" << endl;
    }
    else if(physical== 0 || mind == 1)
    {
        cout << "Your health condition is not good. so go and sleep." << endl;
    }
    else{
        cout << "You are out of control." << endl;
    }
    return 0;
}
