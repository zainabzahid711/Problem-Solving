#include <iostream>
using namespace std;

// ARRAY ROTATION AT ONE TIME
// solve using two pointr approach with O(n) time complexity
// input arr[] = {1,2,3,4,5}
// output arr[] = {5,1,2,3,4}
int cyclicRotation(int arr[], int size)
{

  int left = 0, right = size - 1;
  while (left < right)
  {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
  }
}
int main()
{
  int size;
  cout << "Enter the size of array _" << endl;
  cin >> size;
  int *arry = new int[size];
  cout << "Enter the array _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  cyclicRotation(arry, size);
  cout << "Array Rotated at one time _" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arry[i] << " ";
  }
  delete[] arry;
  return 0;
}
