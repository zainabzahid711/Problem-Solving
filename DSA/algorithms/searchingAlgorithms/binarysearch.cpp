#include <iostream>
using namespace std;
//_____________  BINARY SEARCH  ___________________
/* monotomic (increasing or decreasing order in a sorted order )
and TIME COMPLEXITY will be O(logn) in 1000
*/
int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  /*optimized form of start+end/2 bcz if integer value is
  exceeded by limit 2^31 so by adding the value will greater nd grtr*/
  int mid = (start = end - start / 2);
  while (start <= end)
  {
    if (key == arr[mid])
    {
      return mid;
    }
    // go to right part (end remians at same position start pointer has to move next to mid mid+1)
    else if (key >= arr[mid])
    {
      return start = mid + 1;
    }
    // go to left part start remains at same position end pointer has to move
    else
    {
      return end = mid - 1;
    }
    mid = (start = end - start) / 2;
  }
  // if key is not found;
  cout << "oooo ohh key is not found _";
  return -1;
}
int main()
{
  int size = 0, key;
  cout << "enter size of array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements in monotonmic order_" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "enter number to search _";
  cin >> key;
  int index = binarySearch(arr, size, key);
  cout << "number is found at index _" << index;
}