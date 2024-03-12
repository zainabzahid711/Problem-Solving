#include <iostream>
using namespace std;
#include <list>

// TYPES:
//  generally there are two operator function
// 1- global operator function
// 2- member operator function

// Precedence and associativity remain intact in operators.
// List of operators that cannot be overloaded in C++ are ::, .*, ., ?: Operators
// "=" and "&" are already overloaded in C++, so we should avoid overloading them.

// We know that, “+” is used for addition or concatenation. Now, if I want to perform my
// customized operation i.e.upon calling +, I want to print “Hello Geek” or
// I want to perform subtraction instead of addition. In such cases, we use operatoroverloading.

// members of a class is private by default
// members of a structure is public by default

struct Student
{
  string name;
  int id;
  Student() {}

  Student(string Name, int Id)
  {
    name = Name;
    id = Id;
  }
};

// ---  insertion operater overloading ----

void operator<<(ostream &COUT, Student &std)
{
  cout << "---------- STUDENT STRUCTURE -----------" << endl;
  cout << "name _" << std.name << endl;
  cout << "id _" << std.id << endl;
}

//----- + operator overloading -----
Student operator+(Student &std, Student &std2)
{
  Student result;
  result.name = std.name + std2.name;
  result.id = std.id + std2.id;
  return result;
}

// struct MyCollection
// {
//   list<Channel> myChannels;

//   void operator+=(Channel &chanel)
//   {
//     this->myChannels.push_back(chanel);
//   }
//   void operator-=(Channel &chanel)
//   {
//     this->myChannels.remove(chanel);
//   }
// };

// ostream &operator<<(ostream &COUT, MyCollection &mycollection)
// {
//   for (Channel ch : mycollection.myChannels)
//     COUT << ch;

//   return COUT;
// }

struct Channel
{
  string name;
  int subscribers;
  Channel(){};
  Channel(string n, int sub)
  {
    name = n;
    subscribers = sub;
  }
};
ostream &operator<<(ostream &COUT, Channel &ch)
{

  cout << "------------ CHANNEL STRUCTURE ------------" << endl;
  cout << "name _" << ch.name << endl;
  cout << "subscribers _" << ch.subscribers << endl;
  return COUT;
}

// ostream & operator === is a global operator function

int main()
{
  Channel ch = Channel("zainab", 23000);
  Channel ch2 = Channel("second channel", 25000);
  cout << ch << endl
       << ch2;

  // << insertion operator is overloaded
  //  by passing the refernece we pass the original value of a variable

  // we can also invoke the operator function like regular function
  // operator<<(cout, ch);
  // operator<<(cout, ch2);

  // --------------  + operator overloading ----------------

  // MyCollection mycollection;
  // mycollection += ch;
  // mycollection += ch2;

  // mycollection -= ch2;
  // cout << mycollection;

  Student std = Student("zainab", 105062);
  Student std2 = Student("zahid", 105063);
  // cout << std;

  // ----to add one more student in Student structure through + operator----
  // function invoke
  // operator<<(cout, std);

  Student res = std + std2;
  cout << res;
}
