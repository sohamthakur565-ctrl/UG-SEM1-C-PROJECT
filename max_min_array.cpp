#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size : ";
    cin >> count;
    cout << "Enter " << count << " elements : ";
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements you entered : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "\nGreatest element : " << max << endl;
    cout << "Smallest element : " << min << endl;

    return 0;
}