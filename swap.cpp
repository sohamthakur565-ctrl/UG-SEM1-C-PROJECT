#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of number a and b : ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap value of a is " << a << " and value of b is " << b;

    return 0;
}