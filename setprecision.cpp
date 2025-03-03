
#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    double pio = 3.1415926;
    cout << fixed << setprecision(3) << pio << endl;

    return 0;
}

/*

1st : 
#include<iomanip>

2nd :
cout << fixed << setprecision(___the number of amounts___) << variable << endl;

*/