#include <iostream>
using namespace std;
//___________________-lenght of string-______________
/*time complexity will be O(n) 'coz of one loop and n is the lenght of the string
space complexity is O(1) The only variables using are name, count, and words,
which have fixed sizes and do not depend on the size of the input string. */
int getlength(char name[])
{
	int length = 0;
	int words = 1;
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ' ')
		{
			words++;
		}
	}
	for (int i = 0; name[i] != '\0'; i++) // it doen't count spaces only letters
	{
		if (name[i] != ' ')
		{
			length++;
		}
	}
	cout << "total words in string _" << words << endl;
	return length;
}
int main()
{
	char name[50];
	cout << "enter a string _" << endl;
	cin.getline(name, 50);
	int length = getlength(name);
	cout << "total lenght of a string is _" << length << endl;
}
