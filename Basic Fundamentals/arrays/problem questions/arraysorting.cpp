#include <iostream>
using namespace std;
int main()
{
  int n = 5, arr[n], min;
  cout << "enter elements of array to sort _" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {

    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[i]) // for reverse sorting(arr[j]>arr[i])
      {
        min = arr[j];
        arr[j] = arr[i];
        arr[i] = min;
      }
    }
  }
  cout << "sorted array is _";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
