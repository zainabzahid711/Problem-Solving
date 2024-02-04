#include <iostream>
using namespace std;

//  an example of resolving the issue with same name functions in both classes
//  ambiguity resolve using the scope resolution operator in single inheritance.
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
  void display()
  {
    cout << "call from derived class _" << endl;
  }
  void baseDisplay()
  {
    Base::display();
  }
};

int main()
{
  Derived obj;
  obj.baseDisplay();
  obj.display();
}