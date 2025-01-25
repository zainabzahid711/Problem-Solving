#include <iostream>
using namespace std;

struct Addition
{
  int val1;
  int val2;

  Addition() {}
  Addition operator+(Addition &obj)
  {
    Addition ad;
    ad.val1 = obj.val1 - val2;
    ad.val2 = obj.val1 - val2;
    return ad;
  }
};

int main()
{
  Addition ad1, ad2;
  ad1.val1 = 2;
  ad2.val2 = 1;
  ad1.val1 = 4;
  ad2.val2 = 3;
  Addition result = ad1 + ad2;
  cout << result.val1 << endl
       << result.val2 << endl;
}