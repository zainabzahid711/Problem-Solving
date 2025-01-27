#include <iostream>
using namespace std;

// in Multilevel Inheritance
// a derived class is created from another derived class.
// base class
class Vehicle
{
public:
  Vehicle() { cout << "This is a Vehicle _" << endl; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle
{
public:
  fourWheeler()
  {
    cout << "Objects with 4 wheels are vehicles _" << endl;
  }
};
// derived from the derived base class fourWheeler
class Car : public fourWheeler
{
public:
  Car() { cout << "Car has 4 Wheels _" << endl; }
};

int main()
{
  Car obj;
  return 0;
}
