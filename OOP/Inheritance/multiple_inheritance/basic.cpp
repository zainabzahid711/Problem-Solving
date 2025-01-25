#include <iostream>
using namespace std;

//  Multiple Inheritance
//  is a feature where a class can inherit from more than one class

class Vehical
{
public:
  Vehical()
  {
    cout << "this is vehical class _\n";
  }
};

class Fourwheeler
{
public:
  Fourwheeler()
  {
    cout << "this is four wheeler class _\n";
  }
};

class Car : public Vehical, public Fourwheeler
{
public:
  Car()
  {
    cout << "this is car class inherited from both vehical and four wheeler _";
  }
};

int main()
{
  Car obj;
}