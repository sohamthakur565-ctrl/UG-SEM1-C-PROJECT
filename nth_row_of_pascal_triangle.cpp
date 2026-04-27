#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter rows : ";
    cin >> rows;

    for (int i = rows; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}