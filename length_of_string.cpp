// #include <iostream>
// using namespace std;

// int main()
// {

//     string str;
//     cout << "Enter string : ";
//     getline(cin, str);

//     int count = 0;

//     for (char ch : str)
//     {
//         count++;
//     }

//     cout << "Length of string : " << count << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);

    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    cout << "Length of string : " << count << endl;

    return 0;
}
