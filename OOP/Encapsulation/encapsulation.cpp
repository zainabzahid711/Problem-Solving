#include <iostream>
using namespace std;
#include <cstring>
//************************encapsulation(information hiding)*************************
// wrapping up data members and function
// fully encapsulated (all data mwmbers are private)
// helps in unit testing

// private data members are some kind of hiding the function they only accessible in the given class only--------------
//

// class Area
//  {
//  private:
//      float lenght;
//      int width;
//      float area;

// public:
//     void lght(float lg)
//     {
//         lenght = lg;
//     }
//     void wdth(int wd)
//     {
//         width = wd;
//     }
//     float get()
//     {
//         area = (lenght * width);
//         return area;
//     }
// };
// int main()
// {
//     Area obj;
//     obj.lght(3.6);
//     obj.wdth(4);
//     cout << "your area of rectangle is _" << endl;
//     cout << obj.get();
//     return 0;
// }

//**********************another exampple*********************
class Student
{
private:
  char *name;
  int age;
  int height;

public:
  Student()
  {
    name = new char[100];
  }
  int getAge()
  {
    return this->age;
  }
  void setAge(int a)
  {
    age = a;
  }
  char *getName()
  {
    return name;
  }
  void setName(char name[])
  {
    strcpy(this->name, name);
  }
  int getHeight()
  {
    return height;
  }
  void setHeight(int h)
  {
    height = h;
  }
  void print()
  {
    cout << "name of student is _" << this->name << endl;
    cout << "age of student is _" << this->age << endl;
    cout << "height of student is _" << this->height << endl;
  }
};
int main()
{
  Student s1;
  char name[7] = "zainab";
  s1.setName(name);
  s1.setAge(20);
  s1.setHeight(5);
  s1.print();
  cout << endl;
  cout << "encapsulation all it is _" << endl;
}