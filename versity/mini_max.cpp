
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a>> b >>c;
    if(a>b && a>c)
    {
        cout << "The maximum number is = " << a << endl;
        if(b>c)
        { 
            cout << "The maximum midi max number is = " << b << endl;
        }
        cout << "The minimuam number is = " << c << endl;
    }
    else if(b>c)
    {
        cout << "The maximum number is = " << b << endl;
        if(a>c)
        {
            cout << "The maximum midi max number is = " << a << endl;
        }
        cout << "The minimuam number is = " << c << endl;
    }
    else{
        cout << "The maximum number is = " << c << endl;
        if(b>a)
        {
            cout << "The maximum midi max number is = " << b << endl;
        }
        cout << "The minimuam number is = " << a << endl;
    }
    return 0;
}
