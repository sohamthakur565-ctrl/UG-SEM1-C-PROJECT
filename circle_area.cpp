#include <iostream>
using namespace std;

int main()
{
    int radii;
    cout << "Enter radius : ";
    cin >> radii;

    float area = 3.14 * radii * radii;

    cout << "Area of circle : " << area;

    return 0;
}