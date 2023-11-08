#include <iostream>
using namespace std;
/*time complexity, the approach is (O(N)), space complexity is O(1).
time complexity is depends on size of array (linear time complexity) and space complexity is a constant
beacuse it does'nt take any extra space for variables (constant space complexity)
*/
void reverseArray(int arr[], int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  cout << "_______reverse array_________" << endl;
  int size;
  cout << "enter size of an array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter elements of array to reverse _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  reverseArray(arr, size);
  cout << "reverse array is _" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
  delete[] arr;
}