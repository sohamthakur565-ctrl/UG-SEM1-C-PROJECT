#include <iostream>
using namespace std;

int main()
{

    int count;
    cout << "Enter amount : ";
    cin >> count;

    int arr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 9; i++)
    {
        if (count >= arr[i])
        {
            cout << "Notes of " << arr[i] << " : " << count / arr[i] << endl;
        }
        count = count % arr[i];
    }

    return 0;
}