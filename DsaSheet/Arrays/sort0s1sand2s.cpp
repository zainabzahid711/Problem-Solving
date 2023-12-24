#include <iostream>
using namespace std;

// sortt array contains zeros ones and twos

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
void printArray(int arr[], int size)
{
  cout << "sorted array _";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int size;
  cout << "enter the size of array _";
  cin >> size;
  int *arry = new int[size];
  cout << "enter the array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  arraySort(arry, size);
  printArray(arry, size);
}