// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter any number : ";
//     cin >> num;

//     int temp = num;
//     int count = 0;

//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }

//     cout << "Length of number you entered is " << count << endl;

//     int sum = 0;

//     for (int i = 0; i < count; i++)
//     {
//         int digit = num % 10;
//         num = num / 10;
//         sum = sum + pow(2, i) * digit;
//     }

//     cout << "The decimal number is " << sum << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long int num;
    cout << "Enter binary number : ";
    cin >> num;

    long int dope = num;
    int digit;

    while (dope != 0)
    {
        digit = dope % 10;
        if (digit > 1 || digit < 0)
        {
            cout << "Number you entered is not binary." << endl;
            return 0;
        }
        dope = dope / 10;
    }

    digit = 0;
    int sum = 0;
    int power = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit * pow(2, power);
        power++;
        num = num / 10;
    }

    cout << "Binary to Decimal is " << sum << endl;

    return 0;
}