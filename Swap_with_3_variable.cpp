#include <iostream>
using namespace std;

int main()
{

    int x, y, c;
    cout << "Enter value of X and Y : ";
    cin >> x >> y;

    c = x;
    x = y;
    y = c;

    cout << "Swapped value of X and Y is " << x << " and " << y;

    return 0;
}