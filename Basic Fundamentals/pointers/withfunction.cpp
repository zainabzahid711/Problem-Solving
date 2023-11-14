#include <iostream>
using namespace std;
void print(int *p)
{
  cout << *p << endl;
}
void update(int *p)
{
  // refernce
  // p = p + 1;
  // cout"inside function adress _" << p << endl; // inside function's adress increase
  // VALUE
  *p = *p + 1;
  cout << "inside function  value_" << *p << endl;
}
int getSum(int *arr, int size)
{
  cout << sizeof(arr) << endl;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}
int main()
{
  int q = 5; // value is inside the main fuction
  int *p = &q;
  print(p);
  // cout << "before update _" << p << endl;
  // update(p);
  // cout << "after update _" << p << endl; // this increment is happened in insdie the function
  cout << "value before update _" << *p << endl;
  update(p);
  cout << "value after update _" << *p << endl;

  int arr[5] = {1, 2, 3, 4, 8};
  cout << "sum _" << getSum(arr+3, 3) << endl;
}