#include <iostream>
using namespace std;

// ambiguity occure when both base classes have same functions and derived
// class wants to call a function then in derived class it must be mentioned
// through the scope resolution which function do you want to use

class Base1
{
public:
  Base1() {}
  void display()
  {
    cout << "Hey! How are you?  " << endl;
  }
};

class Base2
{
public:
  Base2() {}
  void display()
  {
    cout << "how's doing?  " << endl;
  }
};

class Derived : public Base1, public Base2
{
public:
  void display()
  {
    Base1::display();
  }
};

int main()
{
  Base1 b1obj;
  Base2 b2obj;
  Derived d1;

  b1obj.display();
  b2obj.display();
  d1.display();
}