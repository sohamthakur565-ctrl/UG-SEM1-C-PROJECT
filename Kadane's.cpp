#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size : ";
    cin >> count;

    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << "  ";
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    cout << "\nMaximum sum : " << sum << endl;

    return 0;
}