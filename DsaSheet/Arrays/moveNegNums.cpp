#include <iostream>
using namespace std;

// An array contains both positive and negative numbers in random order.
//  Rearrange the array elements so that all negative numbers appear before all positive numbers.

void moveNegNums(int arr[], int left, int right)
{
  int x = left, y = right;
  while (x <= y)
  {
    while (arr[x] < 0 && x <= y)
    {
      x++;
    }
    while (arr[y] >= 0 && x <= y)
    {
      y--;
    }
    if (x <= y)
    {
      swap(arr[x], arr[y]);
      x++;
      y--;
    }
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int size, k, l, r;
  cout << "enter the size of array _";
  cin >> size;
  int *arry = new int[size];
  cout << "enter the array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  moveNegNums(arry, 0, size - 1);
  cout << "after reArranging _" << endl;
  printArray(arry, size);
  delete[] arry;
  return 0;
}
