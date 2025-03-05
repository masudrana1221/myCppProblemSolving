
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int rmb;
    cin >> rmb;
    if(rmb>=1000)
    {
        cout << "You can buy a WIFE" << endl;
        cout << "Pubjabi, Payjama, Watch and Shu" << endl;
    }
    else if(rmb>=700 && rmb<1000)
    { 
        cout << "You can buy under the items : " << endl;
        cout << "Pubjabi, Payjama and Watch" << endl;
    }
    else if(rmb>=500 && rmb<699)
    {
        cout << "You can buy under the items : " << endl;
        cout << "Pant, t-shirt, a good watch" << endl;
    }
    else if(rmb>=300 && rmb<499)
    {
        cout << "You can buy under the items : " << endl;
        cout << "Pubjabi, Watch and Shu" << endl;
    }
    else if(rmb>=100 && rmb<299)
    {
        cout << "You can buy under the items : " << endl;
        cout << "Watch and Shu" << endl;
    }
    else if(rmb>=50 && rmb<99)
    {
        cout << "You can buy only low bujet : " << endl;
        cout << "Pubjabi, Payjama, and Shu" << endl;
    }
    else if(rmb>00 && rmb<49)
    {
        cout << "You can buy only watch" << endl;
    }
    else{
        cout << "You can buy Nothing" << endl;
    }
    return 0;
}

