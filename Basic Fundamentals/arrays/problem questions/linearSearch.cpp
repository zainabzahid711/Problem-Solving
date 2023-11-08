#include <iostream>
using namespace std;
bool searchinArray(int arr[], int size, int num)
//_____________________-Linear Search-__________________________
/*time and space complexity is O(size)*/
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == num)
    {
      cout << "element found in array at position_" << i + 1 << endl;
      return true;
    }
  }
  cout << "element not found _";
  return false;
}
int main()
{
  int size, no;
  cout << "enter size of array _" << endl;
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "enter number to search in array _" << endl;
  cin >> no;
  if (searchinArray(arr, size, no))
  {
    cout << "number found in array _" << endl;
  }
  delete[] arr;
}