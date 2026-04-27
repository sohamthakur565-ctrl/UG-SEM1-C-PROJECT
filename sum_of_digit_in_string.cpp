#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    int sum = 0, num = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (isdigit(ch))
        {
            num = num * 10 + (ch - '0');
        }
        else
        {
            sum += num;
            num = 0;
        }
    }

    sum += num;

    cout << "Sum of numbers = " << sum;
    return 0;
}
