#include <iostream>
using namespace std;

// abstraction in c++ is shwoing the important data and hide the un-impoertant
// data REAL LIFE EXMAPLE --- A COFFEE MACHINE
// process of making the coffee is hidden from end-user

// develpers hide complex data from others to make code easier to understand

// things that are abstracted don't change very often or don't change the interface
// for the end-user

// we cannot create instances for abstract classes but we create pointers for abstract classes
// abstract class is that which has at least one pure-virtual function

class SmartPhone
{

public:
  virtual void takeSelfie() = 0;
  virtual void makeCall() = 0;
};

// now smartphone class has become abstracted layer
// smartphone is the interface having important functions only
// here are all functionalities hiding complex code

class Android : public SmartPhone
{
public:
  void takeSelfie()
  {
    cout << "andriod took a selfie _" << endl;
  }
  void makeCall()
  {
    cout << "andriod calling _" << endl;
  }
};

class Iphone : public SmartPhone
{
public:
  void takeSelfie()
  {
    cout << "iphone selfie _" << endl;
  }
  void makeCall()
  {
    cout << "Iphone calling _" << endl;
  }
};
int main()
{
  SmartPhone *s1 = new Android();
  // base class pointer points to derived class
  s1->takeSelfie();
  s1->makeCall();

  SmartPhone *i1 = new Iphone();
  i1->takeSelfie();
  i1->makeCall();
}