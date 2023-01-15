#include <iostream>
using namespace std;
int main()
{
    long da, hra, np, gp;
    long ma = 1500;
    cout << "Net Pay: " << endl;
    cin >> np;
    da = (30 * np) / 100;
    cout << "DA: " << da << endl;
    hra = (10 * np) / 100;
    cout << "HRA: " << hra << endl;
    gp = np + da + hra + ma;
    cout << "Gross Pay: " << gp << endl;
    return 0;
}