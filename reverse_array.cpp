#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size : ";
    cin >> count;

    int arr[count];
    cout << "Enter elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = temp;
    }
    cout << "Reverse array : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}