#include <iostream>
using namespace std;
int main()
{
    for (int a = 0; a < 51; a++)
    {
        cout << "a = " << a;
        if (a % 5 == 0 && a % 3 == 0)
        {
            cout << "fizzbuzz" << endl;
        }
        else if (a % 3 == 0)
        {
            cout << "fizz" << endl;
        }
        else if (a % 5 == 0)
        {
            cout << "buzz" << endl;
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}