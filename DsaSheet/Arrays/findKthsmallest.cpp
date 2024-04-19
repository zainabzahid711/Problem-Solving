#include <iostream>
using namespace std;

// in this program we find k'th smallest number using sorting the array
// for example arr[4,3,19,13,2] k=2 ----- output=3
// so find the k'th smallest number

void ArraySort(int array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (array[j] > array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
int findKthNo(int arr[], int size)
{
  // for example arr[4,3,19,13,2] k=2 ----- output=3
  ArraySort(arr, size);
  // array is sort now arr[2, 3, 4, 13, 19] ------output=3 'cuz k is 2
  int min = 0, k = 0;
  cout << "enter the k element to compare _";
  cin >> k;
  // kth smallest number is present on the k-1 index
  if (k > 0 && k < size)
  {
    return arr[k - 1];
    // for finding the largest the kth element
    // return arr[size - 1];
  }
  else
  {
    cout << "please enter the valid k'th value for compare";
    return -1;
  }
}

int main()
{
  int size;
  cout << "enter the size of array _";
  cin >> size;
  int *arry = new int[size];
  cout << "enter the array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  int kthSmallest = findKthNo(arry, size);
  cout << "K'th smallest number in array is _" << kthSmallest;
}