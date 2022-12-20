#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "\nEnter the First number : a =  ";
    cin >> a;
    cout << "\n Enter the Second number: b =  ";
    cin >> b;
    cout << "\nValues Before : a = " << a << " and b = " << b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "\nResult After : a = " << a << " and b = " << b;
    return 0;
}