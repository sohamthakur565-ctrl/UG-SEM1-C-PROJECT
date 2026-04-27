#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str; // no spaces

    int size = str.length();
    int hash_map[256];

    memset(hash_map, 0, sizeof(hash_map));

    for (int i = 0; i < size; i++)
    {
        hash_map[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (hash_map[(unsigned char)str[i]] != 0)
        {
            cout << str[i] << " -> " << hash_map[(unsigned char)str[i]] << endl;

            hash_map[(unsigned char)str[i]] = 0;
        }
    }

    return 0;
}
