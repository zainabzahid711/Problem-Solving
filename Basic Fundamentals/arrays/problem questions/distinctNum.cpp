#include <iostream>
using namespace std;
//_____________________find distinct element in an array__________________________
/* 1 1 2 2 3 3 here 1 2 3 are distinct elements
The time complexity of the code is O(n^2), where n is the size of the array. This
is because the code iterates
through the array once to compare each element with the next element in nested loops.
The space complexity of the code is O(1),The space used is constant regardless of the array size.
*/
int distinctNuminArray(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int j;
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        break;
      }
    }
    if (i == j)
    {
      cout << arr[i] << " ";
    }
  }
}
int main()
{
  int size;
  cout << "enter size of an array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter array elements_" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "unique elements in array _"
       << " " << endl;
  distinctNuminArray(arr, size);
}