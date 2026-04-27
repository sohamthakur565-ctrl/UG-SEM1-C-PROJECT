#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);

    int v_count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            v_count++;
        }
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v_count++;
        }
        i++;
    }
    cout << "Total vowels present : " << v_count << endl;

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << "Length of string : " << length << endl;

    cout << "changes string : ";
    for (int i = 0; i < length; i++)
    {
        if ((str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u') || (str[i] != 'A' || str[i] != 'E' || str[i] != 'I' || str[i] != 'O' || str[i] != 'U'))
        {
            cout << str[i];
        }
    }

    return 0;
}