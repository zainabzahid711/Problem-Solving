#include <iostream>
using namespace std;
int missingValue(int arr[], int size)
{
  int missing = 0, expSum = 0, actSum = 0;
  expSum = size * (size + 1) / 2;
  for (int i = 0; i < size - 1; i++)
  {
    actSum += arr[i];
  }
  missing = expSum - actSum;
  cout << missing;
  return missing;
}
int main()
{
  int size;
  cout << "enter size of array _" << endl;
  cin >> size;
  int *arr = new int[size];
  cout << "enter array _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "missing value is _" << endl;
  missingValue(arr, size);
  delete[] arr;
}
