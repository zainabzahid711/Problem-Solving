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
  char start = string[0];
  // swap(string[start], string[end]);
  for (int i = 1; i < lenght; i++)
  {
    string[i - 1] = string[i];
  }
  string[lenght - 1] = start;
}

int main()
{
  const int maxSize = 500;
  char str[maxSize];
  cout << "enter a string _" << endl;
  cin.getline(str, maxSize);
  int lenghtOfstr = getlenght(str);
  cout << "lenght of string _" << lenghtOfstr;
  stringRotation(str, lenghtOfstr);
  cout << "oneTimeRotation of string_" << str;
}