#include <iostream>
using namespace std;

int search(int num, int size, int arr[])
{

  for (int i = 0; i < size; i++)
  {
    if (num == arr[i])
    {
      cout << "found element at poistion _" << i + 1;
      return i;
    }
  }

  cout << "element not find _";
  return -1;
}
int main()
{
  int size, num;
  int *arry = new int[size];
  cout << "enter size of array _";
  cin >> size;
  cout << "enter your array _";
  for (int i = 0; i < size; i++)
  {
    cin >> arry[i];
  }
  cout << "enter the number to search in array _";
  cin >> num;
  search(num, size, arry);
}