#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int i = 0;
    int length = 0;

    while (str[i] != '\0')
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U'))
        {
            length++;
        }
        i++;
    }
    cout << "Total vowels : " << length;

    return 0;
}