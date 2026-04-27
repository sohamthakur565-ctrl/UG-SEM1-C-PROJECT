// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter any number : ";
//     cin >> num;

//     int arr[num];

//     for (int i = 0; i < num; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The number you entered is ";

//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i];
//     }

//     cout << "\nThe replaced number is ";

//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] == 0)
//         {
//             arr[i] = 1;
//         }
//     }

//     for (int i = 0; i < num; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num;
    cout << "Enter any number : ";
    cin >> num;

    int temp = num;
    int length = 0;
    while (temp != 0)
    {
        length++;
        temp = temp / 10;
    }

    temp = num;

    cout << "Length of number you entered is " << length << endl;

    int digit;
    int replace_num = 0;
    for (int i = 0; i < length; i++)
    {
        int digit = temp % 10;
        temp = temp / 10;
        if (digit == 0)
        {
            digit = 1;
        }
        replace_num = digit*pow(10, i) + replace_num;
        temp = temp / 10;
    }

    cout << "Replaced number is " << replace_num;

    return 0;
}