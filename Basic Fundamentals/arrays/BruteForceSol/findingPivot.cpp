#include <iostream>
using namespace std;

// suppose we have array of
// 1 2 5 12 18 38 10 13 8 7
// we have to return an idx of sum of right and left elements without consdering the idx element
// approach to think
// input == array
// output == idx
// what we have to find rightSum == leftSum
// start from left 1 and 113 are not equal then procceed with it
int PivotElement(int size, int arr[])
{

    for (int i = 0; i < size; i++)
    {
        int Lsum = 0;
        int Rsum = 0;
        for (int j = 0; j < i; j++)
        {
            Lsum = Lsum + arr[j];
        }
        for (int k = size - 1; k > i; k--)
        {
            Rsum = Rsum + arr[k];
        }

        if (Lsum == Rsum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, idx;
    cout << "enter Your array size _" << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "enter Your array elements _" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int pivotIdx = PivotElement(size, arr);
    if (pivotIdx != -1)
    {
        cout << "The pivot index is _" << pivotIdx << endl;
    }
    else
    {
        cout << "no index found";
    }
    delete[] arr;
}