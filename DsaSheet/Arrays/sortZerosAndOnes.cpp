#include <iostream>
using namespace std;

// sort the array of 0's and 1's using pointer approach----- arr[]={0 1 0 1 0 1 0}
// seggreagte zeros on left and 1's on right traverse the array only once
// everything get easiear with pointer happyy coding
int sortZerosAndOnes(int arr[], int size)
{
  // seggreage the zeros and ones
  int i, j;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      count++;
    }
  }
  for (int i = 0; i < count; i++)
  {
    arr[i] = 0;
  }
  for (int i = count; i < size; i++)
  {
    arr[i] = 1;
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
  cout << "enter your array containing 0's & 1's _";
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  sortZerosAndOnes(arry, size);
  printArray(arry, size);
}
