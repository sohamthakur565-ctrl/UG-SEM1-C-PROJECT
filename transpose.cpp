#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    cout << "Enter rows : ";
    cin >> rows;
    cout << "Enter columns : ";
    cin >> columns;

    int arr[rows][columns];
    cout << "Enter " << rows * columns << " elements : ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix you made : " << endl
         << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Transposed matrix : " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[j][i] << "  ";
        }
        cout << endl;
    }

    return 0;
}