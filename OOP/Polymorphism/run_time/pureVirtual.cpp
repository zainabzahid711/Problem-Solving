#include <iostream>
using namespace std;

// Pure virtual function is defined in base class and base class function's does'nt need its own
// implementation... base class's function just need to make sure that every class inherited from
// it implements its own function

// and then that base class is called ABSTRACT CLASS
// by defination abstract class is that has at least one PURE VIRTUAL FUNCTION

class Instrument
{
public:
  // pure virtual function
  //  it forces all derived classes to make their own implementation of this pure-V function
  virtual void MakeSound() = 0;
};

class Voilin : public Instrument
{
public:
  void MakeSound()
  {
    cout << "voilin is playing --" << endl;
  }
};

class piano : public Instrument
{
public:
  void MakeSound()
  {
    cout << "painoo is playing --" << endl;
  }
};

int main()
{
  Instrument *i1 = new Voilin();
  // i1->MakeSound();
  Instrument *i2 = new piano();
  // i2->MakeSound();

  // polymorphic behavoiur

  // array
  Instrument *instruments[] = {i1, i2};
  for (int i = 0; i < 2; i++)
  {
    instruments[i]->MakeSound();
  }
}