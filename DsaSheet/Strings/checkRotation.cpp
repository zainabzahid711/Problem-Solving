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
void stringConcatination(char string1[], int lenght)
{
  int i, j;
  char stringConcate[500];
  for (i = 0; string1[i] != '\0'; i++)
  {
    if (string1[i] != '\0')
    {
      stringConcate[i] = string1[i];
    }
  }
  for (j = 0; string1[j] != '\0'; j++, i++)
  {
    if (string1[j] != '\0')
    {
      stringConcate[i] = string1[j];
    }
  }
  stringConcate[i] = '\0';
  cout << "string concatination _" << stringConcate << endl;
}

bool checkRotation(char st1[], char st2[], int lenght)
{
  int indexFound = 0;
  char stConcate[500];
  int i, j = 0;
  // stringConcatination(string1, string2, lenght);
  for (i = 0; i < lenght; i++)
  {
    if (st1[i] == st2[j])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  const int maxSize = 500;
  char string[maxSize];
  char str1[maxSize];
  char str2[maxSize];
  cout << "enter string1 _" << endl;
  cin.getline(str1, maxSize);
  cout << "enter string2 _" << endl;
  cin.getline(str2, maxSize);
  int lenghtOfstr = getlenght(str1);
  cout << "lenght of string _" << lenghtOfstr << endl;
  stringConcatination(str1, lenghtOfstr);
  bool isRotation = checkRotation(str1, str2, lenghtOfstr);
  if (isRotation)
  {
    cout << "string1 is the rotation of string2 _" << endl;
  }
  else
  {
    cout << "string1 is not rotation of string2 _" << endl;
  }

  return 0;
}
