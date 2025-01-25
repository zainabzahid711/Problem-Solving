#include <iostream>
using namespace std;

/*
When you pass a variable to a function in copy of that variable is made in the function's scope.
Any changes made to the variable inside the function do not affect the original variable in the calling function.


When you pass an array to a function  you're passing a pointer to the first
element of the array. This means that the function works directly with the original array and any
changes made to the array inside the function are reflected in the original array in the calling function.


 linear search in 2d ararys
   ---  time complexity is O(row*colm) ------
 1st loop for rows and 2nd for colms same as first dmension for rows and 2nd for colms
 we need to pass atleast one dimension of 2d-array when passing as an paramter beacuse in memory array is
 stored in linear fashion so we need to tell it explicilty and in that case we know that the pointer of 1st element
 of array is pasing.
 to search an element
*/

bool isPresent(int arry[][4], int target, int row, int col, int &rowFound, int &colFound)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arry[i][j] == target)
            {
                rowFound = i;
                colFound = j;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int target = 0, foundRow, colFound;
    int arr[3][4];
    cout << "enter your array _" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "enter element to search _" << endl;
    cin >> target;
    if (isPresent(arr, target, 3, 4, foundRow, colFound))
    {
        cout << "element found [--- row == " << foundRow << " --- column == " << colFound << "]" << endl;
    }
    else
    {
        cout << "element is not found _" << endl;
    }
}