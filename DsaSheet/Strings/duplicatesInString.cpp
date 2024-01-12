// #include <iostream>
// using namespace std;

// // find th duplicates in a string
// // zainabzahid --- a=> count=3 --- i=> count=2 --- z=> count=2

// int getlenght(char string[])
// {
//   int lenght = 0;
//   for (int i = 0; string[i] != '\0'; i++)
//   {
//     lenght++;
//   }
//   return lenght;
// }

// // this bruteForce solution takes O(n^2) time complexity

// int duplicateInString(char string[], int lenght)
// {
//   cout << "duplicate elements _" << endl;
//   for (int i = 0; i < lenght; i++)
//   {
//     int count = 1;
//     if (string[i] != '\0')
//     {
//       for (int j = i + 1; j < lenght; j++)
//       {
//         if (string[i] == string[j])
//         {
//           count++;
//           string[j] = '\0';
//           // set the duplicate to null for printing it again
//         }
//       }
//       if (count > 1)
//       {
//         cout << string[i]
//              << "=>count" << count << endl;
//       }
//     }
//   }
// }

// int main()
// {
//   char str[500];
//   cout << "enter a string _" << endl;
//   cin.getline(str, 500);
//   int lenghtOfstr = getlenght(str);
//   cout << "lenght of string _" << lenghtOfstr << endl;
//   duplicateInString(str, lenghtOfstr);
//   // cout << "duplicates in string _" << duplicateInString(str, lenghtOfstr);
// }

// _______________________________________________---using map----_______________________________________________________

// // find th duplicates in a string
// // zainabzahid --- a=> count=3 --- i=> count=2 --- z=> count=2

// // now lets move into the the O(1) time complexity (code efficiency)
// using unordered map this use hashing technique
// and use both key and value pair

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

void printDuplicates(string str)
{
  unordered_map<char, int> map;
  for (int i = 0; i < str.length(); i++)
  {
    map[str[i]]++;
  }
  for (auto x : map)
    if (x.second > 1)
    {
      cout << x.first << " count = "
           << x.second << endl;
    }
}

int main()
{
  string st;
  cout << "enter your string _" << endl;
  cin >> st;
  printDuplicates(st);
}
