#include <iostream>
using namespace std;

int main()
{
    int arr[2][3]; // arr size 1st for rows 2nd for colms
    cout << "enter your array _" << endl;
    // taking row wise input
    // for (int i = 0; i < 2; i++) // for rows
    // {
    //     for (int j = 0; j < 3; j++) // for colms
    //     {
    //         cin >> arr[i][j]; // 1st one for rows 2nd for colms
    //     }
    // }
    // taking column wise input
    for (int i = 0; i < 3; i++) // for colms
    {
        for (int j = 0; j < 2; j++) // for rows
        {
            cin >> arr[j][i]; // 1st one for rows 2nd for colms
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // to start from a new row
    }
}