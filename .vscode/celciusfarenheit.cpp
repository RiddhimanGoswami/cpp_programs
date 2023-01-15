#include <iostream>
using namespace std;
int main()
{
    int cel, far;
    cout << "Celcius temp:" << endl;
    cin >> cel;
    far = (9 * cel + 160) / 5;
    cout << "Fahrenheit temp" << far << endl;
}