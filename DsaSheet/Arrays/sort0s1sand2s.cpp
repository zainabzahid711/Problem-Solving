#include <iostream>
using namespace std;

// sortt array contains zeros ones and twos
// without any algorithem

// first approach is counting approach
// void sort012(int arr[], int size)
// {
//   int count0 = 0, count1 = 0, count2 = 0;
//   for (int i = 0; i < size; i++)
//   {
//     switch (arr[i])
//     {
//     case 0:
//       count0++;
//       break;
//     case 1:
//       count1++;
//       break;
//     case 2:
//       count2++;
//       break;
//     }
//   }
//   for (int i = 0; i < count0; ++i)
//   {
//     arr[i] = 0;
//   }
//   for (int i = count0; i < count0 + count1; ++i)
//   {
//     arr[i] = 1;
//   }
//   for (int i = count0 + count1; i < count0 + count1 + count2; ++i)
//   {
//     arr[i] = 2;
//   }
// }

// dutch flag algorithem is more efficient approach
// as both functions sort012 and dutchFlagAlgo has same time complexity O(n)
void dutchFlagAlgo(int arr[], int size)
{
  int mid = 0, low = 0, high = size - 1;
  while (mid <= high)
  {
    if (arr[mid] == 0)
    {
      swap(arr[mid], arr[low]);
      mid++;
      low++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }
    else
    { // arr[mid]==2
      swap(arr[mid], arr[high]);
      high--;
    }
  }
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
  int size;
  cout << "enter the size of array _";
  cin >> size;
  int *arry = new int[size];
  cout << "enter the array elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  // sort012(arry, size);
  dutchFlagAlgo(arry, size);
  printArray(arry, size);
}