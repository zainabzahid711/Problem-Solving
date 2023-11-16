#include <iostream>
using namespace std;
/*
find pivot element in a sorted array and here's minimum element consider as pivot
*/
int FindPivot(int arr[], int size, int &index, int &key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] > arr[mid + 1]) // OR arr[mid]>=arr[0] OR arr[mid]>arr[end]
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  index = start;
  return arr[end];
}
int main()
{
  int size = 0, index, key;
  cout << "enter size of array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements in mountain order_" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "enter element to search _";
  cin >> key;
  int pivot = FindPivot(arr, size, index, key);
  cout << "pivot element in an array _" << pivot << endl;
  cout << "index is_" << index << endl;
}