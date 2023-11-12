#include <iostream>
using namespace std;
//************************pointers with arrayss***********************
int main()
{
  /*
  int arr[5] = {1, 9, 3, 4, 5};
  cout << "adress of first memory block_" << arr << endl;
  cout << "adress _" << &arr[0] << endl;
  cout << "value _" << arr[4] << endl;
  cout << "chk1 _" << *arr << endl;
  cout << "chk2 _" << *arr + 5 << endl;   //*arr shows the 1st index then+1 increment in value of 1st index
  cout << "chk3 _" << *(arr + 1) << endl; // same as arr[1] like we can say that arr[i]=*(arr+i)
  cout << "chk4 " << (*arr) + 1 << endl;
  // int i = 3;
  // cout << i[arr]; //same as *(i+arr)
  //***************************size********************************
  /*cout << sizeof(arr) << endl; // 40
  cout << sizeof(*arr) << endl;
  int *ptr = &arr[0];
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
  cout << sizeof(&arr) << endl;
  cout << &arr[0] << endl;
  cout << "arry's adress _" << arr << endl;
  int *p = &arr[0];
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;
  // EEROR
  // arr = arr + 1;
  p = p + 1; // next adress
  */
  //***************************char arrays****************************
  // adress of arrays can't be reassign
  int arr[5] = {1, 2, 3, 4, 5};
  char ch[6] = "abcde";
  cout << arr << endl; // address
  cout << ch << endl;  // abcde
  // cout differently implented on chr and int arrays
}