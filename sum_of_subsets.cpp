#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size : ";
    cin >> count;
    cout << "Enter " << count << " element : ";
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout << "Array : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"SUBSETS : "<<endl;

    for (int i = 0; i < count; i++)
    {
        cout << "{" << arr[i] << "}, sum = " << arr[i] << endl;
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    

    return 0;
}