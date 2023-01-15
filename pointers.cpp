#include <iostream>
using namespace std;
void fun(int *, int *);
int main()
{

    int a = 3;
    // cout << &a;
    // int *ptr;
    // ptr = &a;
    int b = 2;
    fun(&a, &b);
    cout << "a = " << a;
    return 0;
}
void fun(int *a, int *b)
{
    *a = *a + *b;
}