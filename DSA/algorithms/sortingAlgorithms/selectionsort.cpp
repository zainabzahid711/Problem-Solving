#include <iostream>
using namespace std;

//--------------------selection sort(descending)-------------------

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[min])
            { // for ascending <arr[min]
                min = j;
            }
        }
        if (min != i)
        {
            //    swap(arr[i],arr[min]);
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void dispaly(int arr[], int size)
{
    cout << "your array is_" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter the size of array _" << endl;
    cin >> n;
    int *arry = new int[n];
    for (int i = 0; i <= n; i++)
    {
        cout << "enter array _"
             << "[" << i << "] " << endl;
        cin >> arry[i];
    }
    sort(arry, n);
    dispaly(arry, n);
}
