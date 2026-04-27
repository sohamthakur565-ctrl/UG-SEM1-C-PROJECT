#include <iostream>
using namespace std;

int main()
{

    int arr[3];
    int great = 0;

    cout << "Enter three elements : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > great)
        {
            great = arr[i];
        }
    }
    cout << "Greatest element : " << great << endl;

    return 0;
}