#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    int dope = str.length();
    int vowel = 0;
    int consonant = 0;

    for (int i = 0; i < dope; i++)
    {
        if ((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') || (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    cout << "No. of Vowels : " << vowel << endl;
    cout << "No. of Consonants : " << consonant << endl;

    return 0;
}