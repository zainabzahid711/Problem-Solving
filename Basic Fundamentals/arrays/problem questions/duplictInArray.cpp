#include <iostream>
using namespace std;
/*as we seen the sorting technique and nsted loop condition in prevoius codes so lets try
another approach with XOR operation XOR=(same values results zero different results 1)
but this approach only can find the one dupliacte in array if multi[le duplicates are presenet
then we should use sorting like in prevous codes
*/
void duplicateInArray(int arr[], int size)
{
  int temp = 0;
  for (int i = 0; i < size; i++)
  {
    temp = temp ^ arr[i];
  }
  for (int i = 1; i < size; i++)
  {
    temp = temp ^ i;
  }
  cout << temp;
}
int main()
{
  int size;
  cout << "enter size of an array _";
  cin >> size;
  int *arr = new int[size];
  cout << "enter elements of array to find duplicate _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "duplicates elements in array _" << endl;
  duplicateInArray(arr, size);
  delete[] arr;
}