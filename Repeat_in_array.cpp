#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size : ";
    cin >> count;

    int arr[count];
    cout << "Enter " << count << " elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements you entered : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int temp;
    int repeat = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                temp = arr[i];
                repeat++;
            }
        }
        if (repeat != 0)
        {
            cout << "Number " << temp << " repeat " << repeat << " times" << endl;
            repeat = 0;
        }
    }

    return 0;
}