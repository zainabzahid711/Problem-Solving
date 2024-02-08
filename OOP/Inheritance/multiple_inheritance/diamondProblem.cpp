#include <iostream>
using namespace std;

//  DIAMOND
//  class A --- two classs are inherited
//  class B and class C --- inherits from class A
//  class D --- inherits from class C and class B

// so in this scenerio class A constructor calls two times according to multiple
// inheritance --- this is how ambiguity
// occure we can resolve it with the help of virtual keyword
// CLASS "A" IS A VIRTUAL BASE CLASS

//  -------  BASIC CONCEPT  -------
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

// ----- EXAMPLE OF VIRTUAL BASE CLASS( --- DIAMOND PROBLEM SOLUTION --- )

// student ---> test
// student ---> suports
// test    ---> result
// support ---> result

class Student // virtual base class
{
protected:
  int rollNo;

public:
  void set_number(int rollNum)
  {
    rollNo = rollNum;
  }
  void print_number()
  {
    cout << "your roll number is _" << rollNo << endl;
  }
};

class Test : virtual public Student
{
protected:
  float maths, physics;

public:
  void set_marks(float m1, float m2)
  {
    maths = m1;
    physics = m2;
  }

  void print_marks()
  {
    cout << "you have obtained _"
         << "\n"
         << "Maths _" << maths << "\n"
         << "physics _" << physics << "\n";
  }
};

class Suports : virtual public Student
{

protected:
  float score;

public:
  void set_score(float scr)
  {
    score = scr;
  }

  void print_score()
  {
    cout << "your badminton score is _" << score << endl;
  }
};

class Result : public Test, public Suports
{
private:
  float total;

public:
  void display()
  {
    total = maths + physics + score;
    print_number();
    print_marks();
    print_score();
    cout << "total result _" << total << endl;
  }
};

int main()
{
  // D obj;
  Result obj;
  obj.set_marks(90.0, 87.6);
  obj.set_number(390);
  obj.set_score(6.5);

  obj.display();
}