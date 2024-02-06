#include <iostream>
#include <map>
using namespace std;

//  Multiple Inheritance
//  is a feature where a class can inherit from more than one class

class Subject
{
protected:
  string subName;
  int marks;

public:
  Subject(string name, int Marks) : subName(name), marks(Marks) {}
  string subjName()
  {
    return subName;
  }
  int markss()
  {
    return marks;
  }
};

class Grading
{
public:
  Grading() {}
  char getGrade(int marks)
  {
    if (marks >= 85)
    {
      return 'A';
    }
    else if (marks >= 70)
    {
      return 'B';
    }
    else if (marks >= 60)
    {
      return 'C';
    }
    else if (marks >= 50)
    {
      return 'D';
    }
    else
    {
      return 'F';
      cout << "Alasss!  but try for another time... GOOD LUCK ..." << endl;
    }
  }
};

class Student : public Subject, public Grading
{
  string name;
  map<string, int> subjectMarks;

public:
  // parametarized constructor
  Student(string name, map<string, int> subjectMarks) : Subject("student", 0), Grading(), name(name), subjectMarks(subjectMarks) {}
  // display function

  void displayStudentData()
  {
    cout << "student Name _" << name << endl;
    cout << "subject wise Marks and grades _" << endl;
    for (const auto i : subjectMarks)
    {
      cout << i.first << " - " << i.second << "(Grade_"
           << getGrade(i.second) << ")" << endl;
    }
  }
};

int main()
{
  map<string, int> jhonMarks = {{"PF", 85},
                                {"OOP", 80},
                                {"DSA", 90},
                                {"DATABASE", 60}};

  map<string, int> jamesMarks = {{"PF", 50},
                                 {"OOP", 60},
                                 {"DSA", 70},
                                 {"DATABASE", 40}};

  map<string, int> LillyMarks = {{"PF", 60},
                                 {"OOP", 75},
                                 {"DSA", 72},
                                 {"DATABASE", 56}};
  // creating objects
  Student jhon("jhonDoe", jhonMarks);
  Student james("james", jamesMarks);
  Student Lilly("LillyJordan", LillyMarks);

  // display data
  jhon.displayStudentData();
  james.displayStudentData();
  Lilly.displayStudentData();
}