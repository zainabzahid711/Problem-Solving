#include <iostream>
using namespace std;
// check the number whether its a power of 2 or not
/*_______Time Complexity______
time complexity of this code is dependant on num actually so we can say that it is known at runtime
no of iterations becomes less by the time so we can conclude the time complexity by log
O(log(num)).....
_________space Complexity_________
the only memory being used is for a few integer variables (num and power) and the input provided
by the user (cin >> num). These variables occupy a fixed amount of memory, so the space complexity
is simple O(1) constant....
*/

/*____________better approach then loop because there's not any if else statement and no loop
loop is just use for calcualting the power value*/
bool isPowerOfTwo(int num, int &power)
{
  if (num <= 0)
  {
    return false;
  }
  if ((num & (num - 1)) == 0)
  {
    while (num > 1)
    {
      power++;
      num = num >> 1;
    }
    return true;
  }
  return false;
}
int main()
{
  int num, power = 0;
  cout << "enter number to check _" << endl;
  cin >> num;
  if (isPowerOfTwo(num, power))
  {
    cout << "number is a power of two _" << endl;
    cout << "2^" << power << endl;
  }
  else
  {
    cout << " number is Not a power of two _";
  }
  return 0;
}
//______________using loop_________________
// bool isPowerOfTwo(int num, int &power)
// {
//   if (num <= 0)
//   {
//     return false;
//   }
//   else
//   {
//     while (num % 2 == 0)
//     {
//       num = num / 2;
//       power++;
//     }
//   }
//   return num == 1;
// }
// int main()
// {
//   int num, power = 0;
//   cout << "enter number to check _" << endl;
//   cin >> num;
//   if (isPowerOfTwo(num, power))
//   {
//     cout << "number is a power of 2 _" << endl;
//     cout << "2^" << power << endl;
//   }
//   else
//   {
//     cout << "number is not a power of 2 _" << endl;
//   }
//   return 0;
// }
