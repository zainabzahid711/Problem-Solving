#include <iostream>
using namespace std;

// single Inheritance
class Vehical
{
public:
  Vehical()
  {
    cout << "this is vehical _" << endl;
  }
};

// derived class   derived from single base class

class Car : public Vehical
{
private:
  string model;

public:
  Car(const string &carModel)
  {
    model = carModel;
    cout << "This is class for cars _" << model << endl;
  }
  void drive()
  {
    cout << "car is being driven _" << endl;
  }
};

int main()
{
  Car obj("proton");
  return 0;
}
