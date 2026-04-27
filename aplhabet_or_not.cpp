// #include <iostream>
// using namespace std;

// int main()
// {
//     char str;
//     cout << "Enter character : ";
//     cin >> str;

//     int check = str;

//     if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
//     {
//         cout << "This character is alphabet";
//     }
//     else
//     {
//         cout << "Not alphabet";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{

    char str;
    cout<<"Enter any character : ";
    cin>>str;

    if ((str >= 65 && str <= 90)||(str >= 97 && str <= 122))
    {
        if (str >= 65 && str <= 90)
        {
            cout<<"Yes! This is a uppercase character."<<endl;
        }
        else
        {
            cout<<"Yes! This is a Lowercase character."<<endl;
        }
        
    }
    else
    {
        cout<<"Please enter only character!!"<<endl;
    }
    

return 0;
}