#include <iostream>
using namespace std;

// single Inheritance
class Vehical
{
protected:
  string carName;
  string carModel;

public:
  // default constructor
  Vehical() {}
  void callfromParent(string carName)
  {
    cout << "-------___ parent class ___-------" << endl;
    cout << "enter your car Name _" << endl;
    cin >> carName;
    cout << "YOUR CAR NAME IS _ " << carName << "\n";
  }
};

// derived class   derived from single base class

class Car : public Vehical
{
  // carModel is protected data member its not access outside the class but
  // can be accssed in derived class
public:
  // default constructor
  Car() {}
  // parameterized constructor
  Car(string carModel)
  {
    cout << "-------____ Derived Class ____------" << endl;
    cout << "enter your car Model _" << endl;
    cin >> carModel;
    cout << "YOUR CAR MODEL IS _ " << carModel << "\n";
  }
  void drive()
  {
    cout << "car is being driven _" << endl;
  }
};

int main()
{
  // P_obj is parent class object and D_obj for derived class obj
  string Name, model;
  Vehical P_obj;
  P_obj.callfromParent(Name);
  Car D_obj(model);

  return 0;
}
