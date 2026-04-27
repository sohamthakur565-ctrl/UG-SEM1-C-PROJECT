#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers a, b and c : ";
    cin >> a >> b >> c;
    cout << "The numbers you entered : " << a << " " << b << " " << c << endl;

    if (a > b && a > c)
    {
        cout << "First number is greatest";
    }
    if (b > a && b > c)
    {
        cout << "Second number is greatest";
    }
    else
    {
        cout << "Third number is greatest";
    }

    return 0;
}