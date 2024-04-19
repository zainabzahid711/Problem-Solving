#include <iostream>
using namespace std;

void PrintSum(int arry[][4])
{

    // ------------------ ROW WISE SUM ------------------------

    cout << "sum of rows _" << endl;
    for (int i = 0; i < 2; i++) // for rows
    {
        int rowSum = 0;
        for (int j = 0; j < 4; j++) // for colms
        {
            rowSum += arry[i][j]; // this is index 1st for row 2nd for colm at each index one value is present
        }
        cout << rowSum << endl;
    }
    cout << endl;
    //----------------------- COLUMN WISE SUM --------------------
    cout << "sum of cols _" << endl;
    for (int i = 0; i < 4; i++)
    {
        int colSum = 0;
        for (int j = 0; j < 2; j++)
        {
            colSum += arry[j][i];
        }
        cout << colSum << endl;
    }
    cout << endl;
    // ----------------- DIAGONAL SUM ------------------------------
    cout << "sum of diagonal _" << endl;
    for (int i = 0; i < 2; i++)
    {
        int diagSum = 0;
        for (int j = 0; j < 4; j++)
        {
            diagSum += arry[i][i];
        }
        cout << diagSum << endl;
    }
    cout << endl;
}

int main()
{
    int arr[2][4];
    // int rows, cols;
    cout << "enter your array _" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    PrintSum(arr);
    // print the sum of rows in the form of rows
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}