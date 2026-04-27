#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    int reversed = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    cout << "Reversed number : " << reversed;

    return 0;
}