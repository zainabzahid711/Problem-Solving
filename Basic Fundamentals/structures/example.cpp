#include <iostream>
using namespace std;

// structure is not built-in data type but its user-defined data type

struct Smartphone
{
  string name;
  int storageSpace;
  string color;
  float price;
};

struct Person
{
  string name;
  int age;
  Smartphone smartphone;
};

void printSmartphoneInfo(Smartphone smartphone)
{
  cout << "name _" << smartphone.name << endl;
  cout << "storage space _" << smartphone.storageSpace << " GB" << endl;
  cout << "color _" << smartphone.color << endl;
  cout << "price _" << smartphone.price << endl;
}
void printpersonInfo(Person pr)
{
  cout << "name _" << pr.name << endl;
  cout << "age _" << pr.age << endl;
  cout << pr.name << " has owned _" << endl;
  printSmartphoneInfo(pr.smartphone);
  cout << "smartphone";
}
int main()
{
  Smartphone smartphone;

  smartphone.name = "samsung galaxy";
  smartphone.storageSpace = 32;
  smartphone.color = "black";
  smartphone.price = 29999.98;

  Smartphone smartphone2;

  smartphone2.name = "smasung s21";
  smartphone2.storageSpace = 64;
  smartphone2.color = "gray";
  smartphone2.price = 24000.00;

  // printSmartphoneInfo(smartphone);
  // printSmartphoneInfo(smartphone2);

  // p is a vairble for person(structure) data type
  Person p;

  p.name = "zainab";
  p.age = 22;
  p.smartphone = smartphone;

  printpersonInfo(p);
}