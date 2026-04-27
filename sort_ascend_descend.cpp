#include <iostream>
using namespace std;

int main()
{

    int count;
    cout << "Enter size : ";
    do
    {
        cin >> count;
    } while (count <= 0);

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
    cout << endl;

    if (count % 2 == 0)
    {
        int incre[count / 2];

        for (int i = 0; i < count / 2; i++)
        {
            incre[i] = arr[i];
        }

        for (int i = 0; i < count / 2 - 1; i++)
        {
            for (int j = 0; j < count / 2 - 1; j++)
            {
                if (incre[i] > incre[j + 1])
                {
                    int temp = incre[i];
                    incre[i] = incre[j + 1];
                    incre[j + 1] = temp;
                }
            }
        }
        cout << "First half sorted in ascending order : ";
        for (int i = 0; i < count / 2; i++)
        {
            cout << incre[i] << " ";
        }
        cout << endl;
        int decre[count / 2];
        for (int i = 0; i < count / 2; i++)
        {
            decre[i] = arr[i + count / 2];
        }
        for (int i = 0; i < count / 2 - 1; i++)
        {
            for (int j = 0; j < count / 2 - 1; j++)
            {
                if (decre[i] < decre[j + 1])
                {
                    int dope = decre[i];
                    decre[i] = decre[j + 1];
                    decre[j + 1] = dope;
                }
            }
        }
        cout << "Second half sorted in decreasing order : ";
        for (int i = 0; i < count / 2; i++)
        {
            cout << decre[i] << " ";
        }
        cout << endl;
    }
    else
    {
        int incre[count / 2];

        for (int i = 0; i < count / 2; i++)
        {
            incre[i] = arr[i];
        }

        for (int i = 0; i < count / 2 - 1; i++)
        {
            for (int j = 0; j < count / 2 - 1; j++)
            {
                if (incre[i] > incre[j + 1])
                {
                    int temp = incre[i];
                    incre[i] = incre[j + 1];
                    incre[j + 1] = temp;
                }
            }
        }
        cout << "First half sorted in ascending order : ";
        for (int i = 0; i < count / 2; i++)
        {
            cout << incre[i] << " ";
        }
        cout << endl;
        int decre[count / 2 + 1];
        for (int i = 0; i < count / 2 + 1; i++)
        {
            decre[i] = arr[i + count / 2];
        }
        for (int i = 0; i < count / 2; i++)
        {
            for (int j = 0; j < count / 2; j++)
            {
                if (decre[i] < decre[j + 1])
                {
                    int dope = decre[i];
                    decre[i] = decre[j + 1];
                    decre[j + 1] = dope;
                }
            }
        }
        cout << "Second half sorted in decreasing order : ";
        for (int i = 0; i < count / 2 + 1; i++)
        {
            cout << decre[i] << " ";
        }
        cout << endl;
    }

    return 0;
}