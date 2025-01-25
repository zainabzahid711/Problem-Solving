#include <iostream>
using namespace std;
//___________index of left most occurance or index of right most occurance______
/*
sorted array
*/
int FirstOcc(int arr[], int size, int key)
{
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  // left most occurance(first occurance) thats we move to left part
  while (start <= end)
  {
    if (key == arr[mid])
    {
      ans = mid;
      end = mid - 1;
    }
    else if (key >= arr[mid]) // right
    {
      start = mid + 1;
    }
    else if (key <= arr[mid]) // left
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int LastOcc(int arr[], int size, int key)
{
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  // right most occurance(2nd occurance) thats we move to left part
  while (start <= end)
  {
    if (key == arr[mid])
    {
      ans = mid;
      start = mid + 1;
    }
    else if (key >= arr[mid]) // right
    {
      start = mid + 1;
    }
    else if (key <= arr[mid]) // left
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int main()
{
  int size, key;
  cout << "enter size of array _" << endl;
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements_" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "enter element to search in element _";
  cin >> key;
  cout << "______-occurance of element-_________" << endl;
  cout << "first occurance of element is at index _" << FirstOcc(arr, size, key);
  cout << endl;
  cout << "2nd occurance of element is at index _" << LastOcc(arr, size, key);
  int fIndex = FirstOcc(arr, size, key);
  int lIndex = LastOcc(arr, size, key);
  cout << endl;
  // total number of occurance
  cout << "______-total number of occurance-_______" << endl;
  int total = (lIndex - fIndex) + 1;
  cout << "total occurance is _" << total;
}