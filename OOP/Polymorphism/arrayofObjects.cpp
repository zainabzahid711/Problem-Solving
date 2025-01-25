#include <iostream>
using namespace std;

// polymorphism describes the ability of an object to have multiple forms

// polymorphism allows the object of derived classes or subclasses to be treated as
// same as the objects of Base class

// the logic that works for base class should work for all derived classes

class Student
{
public:
  string name;
  int age;
  char gender;
  Student() {}
  virtual void Study() = 0;
};

// Student is now become an abstract class which means we cannott create instances for this base class
// but we can create instances (=== objects) of derived class
class ItStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning program _\n";
  }
};

class ArtStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning to sketch _\n";
  }
};

class MusicStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning to play paino and voilin _\n";
  }
};

int main()
{
  Student *students[3];
  students[0] = new ItStudent();
  students[1] = new ArtStudent();
  students[2] = new MusicStudent();

  for (int i = 0; i < 3; i++)
  {
    students[i]->Study();
  }

  // deallocate memory

  // wrong one
  // delete[] students;
  for (int i = 0; i < 3; i++)
  {
    delete students[i];
  }
}