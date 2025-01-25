#include <iostream>
using namespace std;

void PrintSum(int arry[][3])
{
    // ----------------- DIAGONAL SUM ------------------------------
    cout << "sum of diagonal _" << endl;
    int mainDiagSum = 0;
    int antiDiagSum = 0;

    for (int i = 0; i < 3; i++)
    {
        mainDiagSum += arry[i][i];     // Main diagonal
        antiDiagSum += arry[i][2 - i]; // Anti-diagonal
    }

    cout << "diagonal_ " << mainDiagSum << endl;
    cout << "anti-diagonal_ " << antiDiagSum << endl;
}

int main()
{
    int arr[3][3];
    // int rows, cols;
    cout << "enter your array _" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    PrintSum(arr);
    // print the sum of rows in the form of rows
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}