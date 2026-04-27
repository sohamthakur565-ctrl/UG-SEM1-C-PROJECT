#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter the value of x, y and constant : ";
    cin >> a >> b >> c;

    int D;
    D = b * b - 4 * a * c;

    float root1, root2;

    if (D == 0)
    {
        root1 = root2;
        root1 = -(b / 2 * a);
        cout << "This equation has equal roots is " << root1 << endl;
    }
    else if (D < 0)
    {
        cout << "The roots are not real, it's imaginary";
    }
    else
    {
        root1 = (-b + pow(D, 1 / 2)) / 2 * a;
        root2 = (-b - pow(D, 1 / 2)) / 2 * a;
        cout << "Root 1 : " << root1 << endl;
        cout << "Root 2 : " << root2 << endl;
    }

    return 0;
}