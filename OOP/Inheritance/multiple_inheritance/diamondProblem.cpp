#include <iostream>
using namespace std;

//  DIAMOND
//  class A --- two classs are inherited
//  class B and class C --- inherits from class A
//  class D --- inherits from class C and class B

// so in this scenerio class A constructor calls two times according to multiple
// inheritance --- this is how ambiguity
// occure we can resolve it with the help of virtual class

class A
{
public:
  A()
  {
    cout << "constructor of A _" << endl;
  }
};

class B : virtual public A
{
public:
  B()
  {
    cout << "constructor of B _" << endl;
  }
};

class C : virtual public A
{
public:
  C()
  {
    cout << "constructor of C _" << endl;
  }
};

class D : public B, public C
{
public:
  D()
  {
    cout << "constructor of D _" << endl;
  }
};

int main()
{
  D obj;
}