#include <iostream>
using namespace std;

//  in single inheritance ambiguity is resolved by itself
//  we don't need a scope resolution operaotr to resolve ambiguity

class Base
{
public:
  Base() {}
  void display()
  {
    cout << "call from base class _" << endl;
  }
};

class Derived : public Base
{
public:
  Derived() : Base() {}
  // void display()
  // {
  //   cout << "call from derived class _" << endl;
  // }
};

int main()
{
  Derived dObj;
  Base bObj;
  bObj.display();
  dObj.display();
}