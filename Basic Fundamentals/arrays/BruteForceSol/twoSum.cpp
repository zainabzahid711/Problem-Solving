#include <iostream>
#include <vector>
using namespace std;

// arr = [2, 7, 11, 15],
// target = 9
// return [0,1]
vector<int> TwoSum(int size, int trgt, int arry[])
{
    vector<int> result;
    // int size;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arry[i] + arry[j] == trgt)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main()
{
    int size, target;
    cout << "enter Your array size _" << endl;
    cin >> size;
    cout << "enter target element _" << endl;
    cin >> target;
    int *arr = new int[size];
    cout << "enter Your array elements _" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = TwoSum(size, target, arr);
    if (!result.empty())
    {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No two elements sum up to the target." << endl;
    }

    delete[] arr;
}