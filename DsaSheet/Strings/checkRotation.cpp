#include <iostream>
using namespace std;

int getlenght(char string[])
{
  int lenght = 0;
  for (int i = 0; string[i] != '\0'; i++)
  {
    lenght++;
  }
  return lenght;
}
void stringRotation(char string[], int lenght)
{
  int left = string[0];
  int right = string[lenght - 1];
  int mid = lenght / 2;
  for (int i = 0; i < mid; i++)
  {
    swap(string[i], string[mid + i]);
  }
}

int main()
{
  const int maxSize = 500;
  char str[maxSize];
  cout << "enter a string _" << endl;
  cin.getline(str, maxSize);
  int lenghtOfstr = getlenght(str);
  cout << "lenght of string _" << lenghtOfstr << endl;
  stringRotation(str, lenghtOfstr);
  cout << "Rotation of string_" << str << endl;
  return 0;
}
