#include <iostream>
using namespace std;

int FirstUniqChar(string str)
{
    // int size;
    for (int i = 0; i < str.size(); i++)
    {
        bool unique = true;
        for (int j = 0; j < str.size(); j++)
        {
            if (i != j && str[i] == str[j])
            // if (str[i] == str[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s;
    cout << "enter string _" << endl;
    cin >> s;

    int idx = FirstUniqChar(s);

    if (idx != -1)
    {
        cout << "your unique character is at index _" << idx;
    }
    else
    {
        cout << "no unique character found _" << endl;
    }
}