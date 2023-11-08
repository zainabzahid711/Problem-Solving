#include <iostream>
using namespace std;
//_______________________swap th alternates in an array_____________________________
/*time complexity is O(n)
  space complexity is O(1)
  as it does not use any additional data structures that grow with the input size.
  th space is constant regardless of the size;
*/
void swapAlternate(int arr[], int size)
{
  for (int i = 0; i < size - 1; i += 2) // to swap the alternates we move 2 index furthur  i=i+2
  {
    if (i + 1 < size)
    {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
    }
  }
}
void display(int arr[], int size)
{
  cout << "array after swapping alternats _" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
}
int main()
{
  int size;
  cout << "enter the size of array _" << endl;
  cin >> size;
  int *arr = new int[size];
  cout << "enter array to swap the alternate elements _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  swapAlternate(arr, size);
  display(arr, size);
}