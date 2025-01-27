#include <iostream>
using namespace std;

// Inheritance in object-oriented programming models the "is-a" relationship,
//  where a derived class (subclass) is a specialized version
//  of its base class (superclass). Here's a real-life example to illustrate

class Human
{
public:
  int age;
  string name;
  int height;

public:
  int setAge(int a)
  {
    age = a;
    return age;
  }
  int setHeight(int h)
  {
    height = h;
    return height;
  }
  string getName()
  {
    cout << "enter your name _" << endl;
    cin >> name;
    return name;
  }
};

// derived class this class publically inherit so all data members in base class
// can be declared via derivd class object

class Male : public Human
{
private:
  string color;
  void sleep()
  {
    cout << "male is sleeping _" << endl;
  }
};

int main()
{
  Male obj1;
  cout << "human age _" << obj1.setAge(22) << endl;
  cout << "height _" << obj1.setHeight(5) << endl;
  cout << "name _" << obj1.getName();
}