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

void reverseString(char string[], int lenght)
{
  int start = 0, end = lenght - 1;
  while (start < end)
  {
    int temp = string[start];
    string[end] = string[start];
    string[end] = temp;
    start++;
    end--;
  }
  cout << "reverse string is_" << string;
}

int main()
{
  char str[500];
  cout << "enter a string _" << endl;
  cin.getline(str, 500);
  int lenghtOfstr = getlenght(str);
  cout << "lenght of string _" << lenghtOfstr;
  reverseString(str, lenghtOfstr);
}