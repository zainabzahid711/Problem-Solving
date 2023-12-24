#include <iostream>
using namespace std;

// find the K'th element in array using unsorting
// for example int arr[3,12,4,24,1] and k=2   ---- output = 3

int partition(int arr[], int left, int right)
{
  int pivot = arr[left];
  // set the index --- i&j are pointers to move
  // i search for greater from pivot
  // j search for smaller from pivot if pivot is left most
  int i = left, j = right;
  while (i < j)
  {
    do
    {
      i++;
    } while (arr[i] <= pivot);

    do
    {
      j--;
    } while (arr[j] > pivot);
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[left], arr[j]);
  return j;
}
// void quickSort(int arry[], int left, int right)
// {
//   if (left < right)
//   {
//     int pivoT = partition(arry, left, right);
//     // recursive
//     quickSort(arry, left, pivoT);
//     quickSort(arry, pivoT + 1, right);
//   }
// }
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

  // quickSort(arry, 0, size);

  int min = 0;
  for (int i = 0; i < size; i++)
  {
    if (arry[i] < min)
    {
      min = arry[i];
    }
  }
  cout << k << "'th smallest number in array is_ " << arry[k - 1] << endl;
  // int pivoT = partition(arry, l, r);
  // cout << pivoT;
  printArray(arry, size);
}