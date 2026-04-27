#include <iostream>
using namespace std;

int power(int num, int exponent);

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    int exponent;
    cout << "Enter exponent : ";
    cin >> exponent;

    cout << "The power of number is " << power(num, exponent);

    return 0;
}

int power(int num, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return num * power(num, exponent - 1);
    }
}