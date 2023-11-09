#include <iostream>
using namespace std;
int main()
{
    char str[80];
    int i = 0, j = 0, flag = 1;
    cout << "enter string:";
    cin.getline(str, 80);
    while (str[i] = '\0')
    {
        if (flag == 1 && str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    if (str[i] == ' ')
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    cout << "output is:" << flag;
}
