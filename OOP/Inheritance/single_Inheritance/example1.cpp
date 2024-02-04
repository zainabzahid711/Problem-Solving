#include <iostream>
using namespace std;

// single inheritance implementation with an example

class Base
{
  string name;

public:
  int age;
  // default constructor
  Base() {}
  string getName();
  void setName();
  int getage();
  void setage();
};
void Base ::setName()
{
  name = "zainab zahid";
}
string Base ::getName()
{
  return name;
}
void Base ::setage(void)
{
  age = 22;
}
int Base ::getage()
{
  return age;
}
class Derived : public Base
{
  int data2;

public:
  Derived() : Base()
  {
    cout << "----___derived class____----"
         << "\n";
  }
  void process();
  void display();
};

void Derived ::process()
{
  data2 = 10 * getage();
}

void Derived ::display()
{
  cout << "name _" << getName();
  cout << "age _" << getage();
  cout << "process _" << data2;
}

int main()
{
  string s;
  int d;
  Derived obj;
  obj.display();
}