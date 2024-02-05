#include <iostream>
using namespace std;
//-------------------binary operator overloading-------------------------
class complex
{
private:
  int x, y;

public:
  complex()
  {
    x = 0;
    y = 0;
  }
  complex(int a, int b)
  {
    x = a;
    y = b;
  }

  complex operator+(complex c)
  {
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;

    return temp;
  }
  void display()
  {
    cout << "1st operand _" << x << endl
         << "2nd operand _" << y;
  }
};
int main()
{
  complex c1(5, 7);
  complex c2(3, 5);
  complex result;
  result = c1 + c2;
  result.display();
}
//------------------------unary operaotor overloading by using class-----------------------------

// class increase
// {
// private:
//     int value;

// public:
//     increase()
//     {
//         value = 10;
//     }
//     void operator++() // prefix
//     {
//         value += 5;
//     }
//     void operator++(int) // postfix
//     {
//         value += 5;
//     }
//     void display()
//     {
//         cout << "sum _" << value;
//     }
// };
// int main()
// {
//     increase inc;
//     ++inc;
//     inc++;
//     inc.display(); // 20 both time increment in same value
// }