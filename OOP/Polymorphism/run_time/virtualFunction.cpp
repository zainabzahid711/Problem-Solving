#include <iostream>
using namespace std;

// virtual function is the function that defined in base cass
// and re-defined in derived class but its main purpose to give runtime
// polymorhpism

class Instrument
{
public:
  virtual void MakeSound()
  {
    cout << "instrument is playing ___" << endl;
  }
};

class Voilen : public Instrument
{
public:
  void MakeSound()
  {
    cout << "Voilen is playing ____" << endl;
  }
};

int main()
{
  Instrument *i1 = new Voilen();
  i1->MakeSound();
}