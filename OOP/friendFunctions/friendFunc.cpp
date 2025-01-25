#include <iostream>
using namespace std;

// FriendFunctions are like real life like your friends have access
// to your private life which others can't access
// so friend Functions can access to private/protected members of the class

// --------  friendship is not mutual  ----------------------

// it means if any private members in derived class we cannottt access these
// into an base class
// but base class member functions can be accessible in derived
// class

// -----------friendship is not inherited --------------------
class equiliteralTriangle
{
protected:
  float a;
  float area;
  float circumfarence;

public:
  equiliteralTriangle() {}
  void calculate(int length)
  {
    a = length;
    area = (1.73 * a * a) / 4;
    circumfarence = a * 3;
  }

  // friend void printInfo(equiliteralTriangle);
  friend class Homework;
};
class Homework
{
public:
  void printInfo(equiliteralTriangle et)
  {
    cout << "circumfarance _" << et.circumfarence << endl;
    cout << "area  _" << et.area;
  }
};

// if function is no more global and its a member function of any class
// then we can make a class of friend of an other class which we want to
// declare

int main()
{
  equiliteralTriangle et;
  et.calculate(3);
  Homework h;
  h.printInfo(et);
}