#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    int gcd = 1;
    int lcm;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    cout << "GCD : " << gcd << endl;
    cout << "LCM : " << lcm << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, gcd = 1;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     for (int i = 1; i <= a && i <= b; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
//     }

//     int lcm = (a * b) / gcd;

//     cout << "LCM of " << a << " and " << b << " is " << lcm;

//     return 0;
// }
