#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter number " << endl;
    cin >> a;
    if (a > 0)
        cout << "positive number" << endl;
    else if (a < 0)
        cout << "negative number" << endl;
    else
        cout << "number is zero" << endl;
}