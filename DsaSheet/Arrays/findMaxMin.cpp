#include <iostream>
using namespace std;

void arraySort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int maxmin(int arr[], int size)
{
  cout << "enter array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  arraySort(arr, size);

  int max = arr[size - 1];
  int min = arr[0];

  cout << "maximum number is _" << max << endl;
  cout << "minimum number is _" << min << endl;
}
void printArray(int array[], int size)
{
  cout << "your sorted array with min max elemnts _";
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
}
int main()
{
  int size;
  cout << "enter the size _" << endl;
  cin >> size;
  int *arry = new int[size];
  maxmin(arry, size);
  printArray(arry, size);
}