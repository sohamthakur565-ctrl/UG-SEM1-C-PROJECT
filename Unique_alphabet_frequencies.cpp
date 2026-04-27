/*
WAP to print the all alphabet and their frequency how many times it appears.
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int temp = str.length();

    int count[temp];
    char unique[temp];

    for (int i = 0; i < temp; i++)//Initializing character 
    {
        unique[i] = '\0';
        count[i] = 0;
    }

    int dope = 0;

    for (int i = 0; i < temp; i++)
    {
        if (str[i] == '\0')   //Skip already counted characters
            continue;

        unique[dope] = str[i];

        for (int j = i; j < temp; j++)  // Start from i
        {
            if (str[j] == unique[dope])  // Correct index used
            {
                count[dope]++;
                str[j] = '\0';
            }
        }

        dope++;
    }

    // Print only filled elements
    for (int i = 0; i < dope; i++)
    {
        cout << unique[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < dope; i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}

