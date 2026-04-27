#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int length = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    cout << "Length of string : " << length;

    return 0;
}