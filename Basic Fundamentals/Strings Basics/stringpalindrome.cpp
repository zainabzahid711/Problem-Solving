#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[100];
	int length,i,temp=0;
	cout<<"enter string:";
	cin>>string;
	for(int i=0;i<length;i++)
	{
		if(string[i]!=string[length-i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp)
	{
	cout<<"sequence is not palindrome";
    }
	else
	{
	cout<<"sequence is a palindrome:";
    }
}
