// #include <iostream>
// using namespace std;

// int factorial(int num)
// {
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }

// int main()
// {

//     int num;
//     cout << "Enter any number : ";
//     cin >> num;

//     cout << "The factorial is " << factorial(num);

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    int factorial = 1;

    if (num == 0 || num == 1)
    {
        factorial = 1;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
    }

    cout << "The factorial of the number is " << factorial << endl;

    return 0;
}