#include <iostream>
using namespace std;
// 1 0 2 3 0 4 0 3
void sortZeros(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    while (arr[end] == 0 && start < end)
    {
      end--;
    }
    while (arr[start] != 0 && start < end)
    {
      start++;
    }
    if (start < end)
    {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
  }
}
void printArray(int arr[], int size)
{
  cout << "sorted array _"
       << " " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  cout << endl;
}

int main()
{
  cout << "_______sort zeros on the right side_______" << endl;
  int size;
  cout << "enter size of array _";
  cin >> size;
  int *arr = new int[size];
  cout << "entr array elements _";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  sortZeros(arr, size);
  printArray(arr, size);
}