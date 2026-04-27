#include <iostream>
using namespace std;

int main()
{
    string pop;
    cout << "Enter string : ";
    getline(cin, pop);

    int i = 0;

    while (pop[i] = '\0')
    {
        if (pop[i] >= 'a' && pop[i] <= 'z')
        {
            pop[i] = pop[i] - 32;
        }

        else if (pop[i] >= 'A' && pop[i] <= 'Z')
        {
            pop[i] = pop[i] + 32;
        }
        i++;
    }
    cout<<"Toggled string : "<<pop;

    return 0;
}