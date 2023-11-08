#include <iostream>
using namespace std;
//_______________________________________find unique number in an array___________________________
/* timr complexity is O(n^2) in case of nested loops
the most effeicient technique is hashing O(n)*/
// void uniqueNum(int arr[], int size)
// {
//   bool isUnique;
//   for (int i = 0; i < size; i++)
//   {
//     isUnique = true;
//     for (int j = 0; j < size; j++)
//     {
//       if (i == j)
//         continue;
//       if (arr[i] == arr[j])
//       {
//         isUnique = false;
//         break;
//       }
//     }
//     if (isUnique)
//     {
//       cout << arr[i];
//       cout << endl;
//     }
//   }
// }
/* better approach then nested loop by sorting the array first time complexity is O(nlogn)
which is a bit effecient the O(n^2)*/
void findUniqueNum(int arr[], int size)
{
  // array sort
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
    {
      cout << arr[i];
    }
  }
  cout << endl;
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
  cout << "unique nmber is/are _"
       << " " << endl;
  findUniqueNum(arr, size);
  delete[] arr;
}
