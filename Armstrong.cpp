// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {

//     int num;
//     cout << "Enter any number : ";
//     cin >> num;

//     int duplicate = num;

//     int temp = num;
//     int count = 0;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     cout << "No of digits in number " << count << endl;

//     int sum = 0;
//     while (num != 0)
//     {

//         int digit = num % 10;
//         sum = sum + pow(digit, count);
//         num = num / 10;
//     }

//     if (duplicate == sum)
//     {
//         cout << "This is armstrong number";
//     }
//     else
//     {
//         cout << "This is not armstrong number";
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

    int dope = num;

    int length = 0;

    while (dope != 0)
    {
        length++;
        dope = dope / 10;
    }

    dope = num;

    int sum = 0;
    int digit;

    while (dope != 0)
    {
        digit = dope % 10;
        sum = sum + pow(digit, length);
        dope = dope / 10;
    }

    if (sum == num)
    {
        cout << "The number you have entered is armstrong." << endl;
    }
    else
    {
        cout << "Not Armstrong!" << endl;
    }

    return 0;
}