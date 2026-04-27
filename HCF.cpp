// #include <iostream>
// using namespace std;
// int find(int a, int b)
// {
//     if (a < 0)
//     {
//         return 0;
//     }
//     else
//     {
//         while (b != 0)
//         {
//             int remainder = a % b;
//             a = b;
//             b = remainder;
//         }

//         return a;
//     }
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter both numbers : ";
//     cin >> num1 >> num2;

//     cout << "HCF : " << find(num1, num2) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int find(int n, int y);

int main()
{
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    cout << "HCF : " << find(num1, num2);

    return 0;
}

int find(int n, int y)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        while (y != 0)
        {
            int remainder = n % y;
            n = y;
            y = remainder;
        }
        return n;
    }
}