#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int temp = num;

    int rev = 0;
    int reminder;

    while (num != 0)
    {
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10;
    }
    cout << "Reversed number : " << rev << endl;

    if (rev == temp)
    {
        cout << "The number is pallindrome";
    }
    else
    {
        cout << "The number is not pallindrome";
    }

    return 0;
}