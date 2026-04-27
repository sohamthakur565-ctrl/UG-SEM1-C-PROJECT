//This will give you approx answer

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    while (i * i <= num)
    {
        i++;
    }

    cout << "Square root (approx) is: " << i - 1;

    return 0;
}
