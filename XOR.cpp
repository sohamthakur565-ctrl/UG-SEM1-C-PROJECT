#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    if (a ^ b)
    {
        cout << "The numbers are not equal";
    }
    else
    {
        cout << "The numbers are equal";
    }

    return 0;
}