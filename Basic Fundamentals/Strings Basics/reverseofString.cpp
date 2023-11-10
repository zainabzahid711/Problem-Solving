#include <iostream>
using namespace std;
int getLength(char string[])
{
	int length = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}
void ReverseString(char string[], int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		int temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
	// lets try with two pointer approach remember we can also just use the reverse loop
	// int start = 0;
	// int end = length - 1;
	// while (start < end)
	// {
	// 	int temp = string[start++];
	// 	string[start++] = string[end--];
	// 	string[end--] = temp;
	// }
}
int main()
{
	char string[40];
	cout << "enter a string _";
	cin.getline(string, 40);
	int length = getLength(string);
	cout << "length of string is _" << length << endl;
	ReverseString(string, length);
	cout << "reverse string is _" << string << endl;
}
