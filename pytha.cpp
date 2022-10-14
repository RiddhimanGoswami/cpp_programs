#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Give a number" << endl;
    cin >> a;
    cout << "Give a number" << endl;
    cin >> b;
    cout << "Hypotenous: " << sqrt(pow(a, 2) + pow(b, 2)) << endl;
    return 0;
}