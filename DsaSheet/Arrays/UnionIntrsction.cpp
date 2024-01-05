#include <iostream>
using namespace std;

// two unsorted array merge them into a new sorted array == unoin
// two unsorted array find similar elements in them == intersection

void findUnion(int arr1[], int arr2[], int n1, int n2) // n1=size1 --- n2=size2
{
  int *resultArr = new int[n1 + n2];
  int left = 0, right = 0;
  int index = 0;
  // this index is for keep track current position of result array
  // left pointer is on the 0th index of left array
  // right pointer is on the 0th index of right array
  while (left < n1 && right < n2)
  {
    if (arr1[left] < arr2[right])
    {
      if (index != 0 && arr1[left] == resultArr[index - 1])
      // this condition checks for duplicate element in result array
      {
        left++;
      }
      else // resultArr[index] != arr1[left]
      {
        resultArr[index] = arr1[left];
        left++;
        index++;
      }
    }
    else // left>right
    {
      if (index != 0 && arr2[right] == resultArr[index - 1])
      {
        right++;
      }
      else // resultArr[index] != arr1[right]
      {
        resultArr[index] = arr2[right];
        index++;
        right++;
      }
    }
  }

  // if some elements are remaning
  while (left < n1)
  {
    if (index != 0 && arr1[left] == resultArr[index - 1])
    {
      left++;
    }
    else
    {
      resultArr[index] = arr1[left];
      index++;
      left;
    }
  }
  while (right < n2)
  {
    if (index != 0 && arr1[right] == resultArr[index - 1])
    {
      right++;
    }
    else
    {
      resultArr[index] = arr1[right];
      index++;
      right++;
    }
  }

  // print the resultArr
  cout << "unoin of array is _" << endl;
  for (int r = 0; r < index; r++)
  {
    cout << resultArr[r] << " ";
  }
}

void intersection(int arr1[], int arr2[], int n1, int n2)
{
  int i = 0, j = 0, k = 0;
  int *resArray = new int[n1 + n2];
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      j++;
    }
    else
    {
      if (k != 0 && arr1[i] == resArray[k - 1])
      {
        i++;
        j++;
      }
      else
      {
        resArray[k] = arr1[i];
        i++;
        j++;
        k++;
      }
    }
  }
  cout << "intersection of array _" << endl;
  for (int x = 0; x < k; x++)
  {
    cout << resArray[x] << " ";
  }
}

int main()
{
  int size1, size2;
  cout << "enter size of 1st array _";
  cin >> size1;
  int *arry1 = new int[size1];
  cout << "enter elements for 1st array_";
  for (int i = 0; i < size1; i++)
  {
    cin >> arry1[i];
  }
  cout << "enter size 2nd of array _";
  cin >> size2;
  int *arry2 = new int[size2];
  cout << "enter elements for 2nd array _";
  for (int i = 0; i < size2; i++)
  {
    cin >> arry2[i];
  }

  // findUnion(arry1, arry2, size1, size2);
  intersection(arry1, arry2, size1, size2);
}