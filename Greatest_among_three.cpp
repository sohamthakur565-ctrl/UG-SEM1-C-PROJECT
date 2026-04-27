#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three values : ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All are equal";
    }

    else if (a > b)
    {
        if (a > c)
        {
            cout << "A is greatest";
        }
    }
    else if (b > c)
    {
        if (b > a)
        {
            cout << "B is greatest";
        }
    }
    else
    {
        cout << "C is greatest";
    }

    return 0;
}