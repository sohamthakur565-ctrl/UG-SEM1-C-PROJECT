#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    int maximum = (num1 + num2 + abs(num1 - num2)) / 2;
    int minimum = (num1 + num2 - abs(num1 - num2)) / 2;

    cout << "Maximum : " << maximum << endl;
    cout << "Minimum : " << minimum << endl;

    return 0;
}