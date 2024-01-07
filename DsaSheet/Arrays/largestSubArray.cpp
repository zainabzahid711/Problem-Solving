#include <iostream>
using namespace std;

// ARRAY REVERSE
// best apprach to solve using two pointr approach
int largestSubArray(int arr[], int size)
{
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
  largestSubArray(arry, size);
  cout << "Reverse Array is _" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arry[i] << " ";
  }
  delete[] arry;
  return 0;
}
