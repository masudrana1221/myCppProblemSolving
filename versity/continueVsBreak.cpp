
// Defrence between Continue and Break Statement.


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()

// Continue Statement

{
    for(int i=0; i<10; i++)
    {
        cout << "Hello" << endl;
            continue;
        cout << " C++" << endl;
    }
    return 0;
}

// Break Statement

{
    for(int i=0; i<10; i++)
    {
        cout << "Hello" << endl;
            break;
        cout << " C++" << endl;
    }
    return 0;
}