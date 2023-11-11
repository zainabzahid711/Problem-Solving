#include<iostream>
using namespace std;
int main()
{
	char ch1[80],ch2[80];
	int upper=0,i=0,lower=0,j=0;
	cout<<"enter a string to upper:";
	cin.getline(ch1,80);
	while(ch1[i]!=' ')
	{
	if(ch1[i]>=97 && ch1[i]<=122)
	{
		ch1[i]=ch1[i]-32;
	}
	i++;
    }
    cout<<"enter a string to lower:";
	cin.getline(ch2,80);
    while(ch2[j]!=' ')
    {
    	if(ch2[j]>=65 && ch2[j]<=90)
    	{
    		ch2[j]=ch2[j]+32;
		}
	j++;
	}
    cout<<"upper case of string is:"<<ch1;
    cout<<"lower case of string is:"<<ch2;
}
