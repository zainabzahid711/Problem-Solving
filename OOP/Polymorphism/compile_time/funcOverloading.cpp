#include <iostream>
#include <string>
using namespace std;

// --------------------------------------function overloading----------------------------------
// function name same,return type may be same or different and parameters should be different
// int print(int &num)
// {
//    cout << "enter your number _";
//    cin >> num;
//    return num;
// }
// int print(double &numbr)
// {
//    cout << "enter your 2nd numbr to display _";
//    cin >> numbr;
//    return numbr;
// }
// int main()
// {
//    int nm;
//    double nmbr;
//    print(nm);
//    print(nmbr);
//    cout << "this is your first number _" << nm << endl;
//    cout << "this is your 2nd number _" << nmbr;
// }
int calculate(int sum)
{
  int size;
  cout << "enter the size how many nmbrs you want to sum _";
  cin >> size;
  int result = 0, num;
  for (int i = 0; i < size; i++)
  {
    cout << "enter nmbr to sum _";
    cin >> num;
    result += num;
  }
  cout << "sum of numbers is _" << result << endl;
  return result;
}
int calculate(double product)
{
  int size;
  cout << "enter the size how many nmbrs you want to product _";
  cin >> size;
  int numpro, resultp = 1;
  for (int i = 0; i < size; i++)
  {
    cout << "enter numbers to find product _";
    cin >> numpro;
    resultp *= numpro;
  }
  cout << "this is your product result of numbers _" << resultp << endl;
  return resultp;
}
string Concatination(string &stringConcat)
{
  string s1, s2;
  cout << "enter string1 _";
  cin >> s1;
  cout << "enter string2 _";
  cin >> s2;
  stringConcat = s1 + s2;
  cout << "concatinated strings " << stringConcat << endl;
  return stringConcat;
}
int main()
{
  int sum;
  int x, y;
  cout << "-----------sum------------" << endl;
  calculate(sum);
  double product;
  cout << "------------product-----------" << endl;
  calculate(product);
  string str;
  cout << "--------string concatination -----------" << endl;
  Concatination(str);
}
// --------------------constructor overloading------------------
// class base
// {
// protected:
//    int x;
// public:
//    base()
//    {
//       cout << "1st constructor _";
//    }
//    base(int a)
//    {
//       cout << "2nd constructor _";
//    }
//    base(int a, int b)
//    {
//       cout << "3rd constructor _";
//    }
// };
// int main()
// {
//    base b1, b2(3), b3(4, 6);
// }