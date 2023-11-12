#include <iostream>
using namespace std;
//*******************pointers**************************
int main()
{
  int num = 5;
  // derefernce operator //int *p (bad pactice-> must initialize whether from 0)
  int *p = &num; // make sure the varaible's and pointer's data type must same
  cout << "value of num _" << *p << endl;
  cout << "adress of num _" << p << endl;
  double x = 2300;
  double *p2 = &x;
  cout << "value of x is _" << *p2 << endl;
  cout << "adress of x is _" << p2 << endl; //&x
  // size
  cout << "size of interger _" << sizeof(num) << endl;
  cout << "size of pointer _" << sizeof(p) << endl;   // int
  cout << "size of pointer 2_" << sizeof(p2) << endl; // double
  //******************************bad practice****************************
  // int *p3 = 0;
  // cout << "value _" << *p3 << endl;
  // ***********************null value and value access*************
  int i = 9;
  int *p4 = 0;
  p4 = &i;
  cout << "adress _" << p4 << endl;
  cout << "value _" << *p4;

  //************any operation******************
  /*
  int z = 7;
  cout << "before _" << z << endl;
  int *p5 = &z;
  (*p5)++; // z=*p5/2 (must assign back to z)
  cout << "after _" << z << endl;
  cout << "adress _" << &p5 << endl;
  */
  //********************copy*****************
  // int s = 8;
  // int *p6 = &s;
  // int *q = p6;
  // cout << "value_" << *p6 << endl;
  // cout << "adress_" << p6 << endl;
  // cout << "value of copy ptr_" << *q << endl;
  // cout << "adress of copy ptr_" << &q << endl;
  // //*********************impt concept******************

  // int t = 9;
  // int *p7 = &t;
  // *p7 = *p7 + 1;
  // cout << "increment in value _" << *p7 << endl;
  // p7 = p7 + 2;
  // cout << "increment in index _" << p7 << endl;
}