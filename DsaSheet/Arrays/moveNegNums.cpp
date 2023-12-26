#include <iostream>
using namespace std;

// find the K'th element in array using unsorting
// for example int arr[3,12,4,24,1] and k=2   ---- output = 3

int moveNegNums(int arr[], int left, int right)
{
  cout << "moved numbers";
}

void printArray(int arr[], int size)
{
  cout << "sorted array _";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int size, k, l, r;
  cout << "enter the size of array _";
  cin >> size;
  int *arry = new int[size];
  cout << "enter the array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  cout << "enter the value of k to find k'th smallest_ ";
  cin >> k;

  moveNegNums(arry, 0, size);
  cout << k << "'th smallest number in array is_ " << arry[k - 1] << endl;
  printArray(arry, size);
}