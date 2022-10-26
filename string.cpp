#include <iostream>
using namespace std;
int main()
{
    int w[5];
    // For taking input in array
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    // For taking output in array
    for (int i = 4; i >= 0; i--)
    {
        cout << w[i] << endl;
    }
    cout << &w << endl;
    return 0;
}