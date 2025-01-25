#include <iostream>
using namespace std;
//________________-find peak in mountain array-______________
/* mountain array 0 1 0 and can be 0 2 1 0 and 3 4 6 5 1 0
order of input must be in a mountain order (first increasing then decreasing)
*/
int mountainArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start < end) // not use equal agin step repeats
  {
    if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return arr[start];
}
int main()
{
  int size = 0;
  cout << "enter size of array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements in mountain order_" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int peak = mountainArray(arr, size);
  cout << "peak element in an array _" << peak << endl;
}