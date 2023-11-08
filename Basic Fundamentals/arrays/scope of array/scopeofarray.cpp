#include <iostream>
using namespace std;
/*
scope is that the copy of array is not created outside the main function(in any function)
if we update/remove/insert of any value of array in any function then it aslo updtaes that
value in main beacause main passes the origanll array's address to the function so copy of array
is not created as like in case of variable
(in case of variable the copy is created in the function so main does'nt affect if we change any value in function)
*/
void inputArray(int arr[], int size)
{
  cout << "enter elements in array _" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}
void updateArray(int arr[], int size)
{
  cout << "arrays inside the function _" << endl;
  // update value
  arr[1] = 12;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}
int main()
{
  int size;
  cout << "enter size _";
  cin >> size;
  int *arr = new int[size];
  inputArray(arr, size);
  cout << "array inside the main function _" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  updateArray(arr, size);
}