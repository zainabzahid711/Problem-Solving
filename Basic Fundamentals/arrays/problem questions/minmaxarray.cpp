#include <iostream>
using namespace std;
/*
int main()
{
  //time complexity is O(10) whixh simplifes the O(1) const time and sapace complexity is O(1000)
  //beacause the size of array is 1000 so we can say that space complexity is size of array
  //initialize entire array with non-zero value OR buit in(fill_n(arr,100,1));
  int arr[1000];
  int val = 1;
  for (int i = 0; i < 10; i++)
  {
    arr[i] = val;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i];
  }
}
*/
// max min array
int getMax(int arr[], int size)
{
  int max = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i]; // built in max=max(max,arr[i])
    }
  }
  return max;
}
int getMin(int arr[], int size)
{
  int min = size;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}
int main()
{
  int size;
  cout << "enter size of array _";
  cin >> size;
  int arr[10];
  cout << "enter elements in array _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "max value in array _" << getMax(arr, size);
  cout << endl;
  cout << "min value in array _" << getMin(arr, size);
}
