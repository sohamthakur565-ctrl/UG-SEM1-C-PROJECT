#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size of array : ";
    cin >> count;

    int arr[count];

    cout << "Enter " << count << " elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort (Ascending)
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int index;
    cout << "Enter index for sum : ";
    cin >> index;

    int sum = 0;

    for (int i = count - 1; i > count - 1 - index; i--)
    {
        sum += arr[i];
    }

    cout << "Sum : " << sum;

    return 0;
}
