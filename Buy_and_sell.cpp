// #include <iostream>
// using namespace std;

// int main()
// {
//     int count;
//     cout << "Enter number of days to observe : ";
//     cin >> count;

//     int trade[count];
//     cout << "Enter frequencies : ";
//     for (int i = 0; i < count; i++)
//     {
//         cin >> trade[i];
//     }

//     cout << "Stock market behaviour : { ";
//     for (int i = 0; i < count; i++)
//     {
//         cout << trade[i] << " ";
//     }
//     cout << "}" << endl;

//     int day;
//     cout << "From which day you have to start : ";
//     cin >> day;

//     int max = 0;
//     int num;

//     for (int i = day - 1; i < count; i++)
//     {
//         if (trade[i] >= max)
//         {
//             max = trade[i];
//             num = i;
//         }
//     }

//     int min = max;
//     int no;

//     for (int i = 0; i < count; i++)
//     {
//         if (trade[i] <= min)
//         {
//             min = trade[i];
//             no = i;
//         }
//     }
//     if (day - 1 == no)
//     {
//         cout << "For profit you have to buy your stocks Today" << endl;

//         cout << "Frequency : " << min << endl;
//     }
//     else if (day - 1 > no)
//     {
//         cout << "For profit you have to buy your stocks in previous day" << endl;
//         cout << "Day : " << no + 1 << endl;
//         cout << "Frequency : " << min << endl;
//     }
//     else
//     {
//         cout << "For profit you have to buy your stocks in upcoming day" << endl;
//         cout << "Day : " << no + 1 << endl;
//         cout << "Frequency : " << min << endl;
//     }

//     if (day - 1 == num + 1)
//     {
//         cout << "Best day to sell your stocks today with frequency " << max << endl;
//     }
//     else
//     {
//         cout << "Best day to sell your stocks is " << num + 1 << " with frequency " << max << endl;
//     }

//     int TP;
//     TP = max - (min);
//     cout << "Total profit you will make : " << TP;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count;
    cout << "Enter number of days to observe : ";
    cin >> count;

    vector<int> trade(count);

    cout << "Enter frequencies : ";
    for (int i = 0; i < count; i++)
        cin >> trade[i];

    int start;
    cout << "From which day you have to start : ";
    cin >> start;

    int minPrice = trade[start - 1];
    int buyDay = start - 1;

    int maxProfit = 0;
    int sellDay = start - 1;

    for (int i = start; i < count; i++)
    {
        if (trade[i] - minPrice > maxProfit)
        {
            maxProfit = trade[i] - minPrice;
            sellDay = i;
        }

        if (trade[i] < minPrice)
        {
            minPrice = trade[i];
            buyDay = i;
        }
    }

    cout << "\nBest day to BUY  : Day " << buyDay + 1 
         << " (Frequency " << trade[buyDay] << ")\n";

    cout << "Best day to SELL : Day " << sellDay + 1 
         << " (Frequency " << trade[sellDay] << ")\n";

    cout << "Total Profit : " << maxProfit << endl;

    return 0;
}
