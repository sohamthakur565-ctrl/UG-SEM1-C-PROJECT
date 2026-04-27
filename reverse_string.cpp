#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    int dope = str.length();

    for (int i = 0; i < dope/2; i++)
    {
        char temp = str[i];
        str[i] = str[dope - 1 - i];
        str[dope - 1 - i] = temp;
    }

    cout << "Reversed string : ";
    for (int i = 0; i < dope; i++)
    {
        cout << str[i];
    }

    return 0;
}