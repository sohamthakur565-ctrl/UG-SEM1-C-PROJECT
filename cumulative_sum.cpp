#include <iostream>
using namespace std;

int main()
{

    int count;
    cout << "Enter size : ";
    cin >> count;
    int arr[count];
    cout << "Enter " << count << " elements : ";

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    cout << "Cumulative sum : " << endl;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
        cout << sum << " ";
    }

    return 0;
}