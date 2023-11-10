#include<iostream>
using namespace std;
int main()
{
	char str1[50],str2[50],str3[50];
	int i,j;
	cout<<"enter string 1:";
	cin.getline(str1,50);
	cout<<"enter string 2:";
	cin.getline(str2,50);


	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!='\0')
		{
			str3[i]=str1[i];
		}
	}
	str3[i++]=' ';
	for(j=0;str2[j]!='\0';j++)
	{
		if(str2[j]!='\0')
		{
			str3[i]=str2[j];
			i++;
		}
	}
	str3[i]='\0';
	cout<<"the string is:"<<str3<<endl;
}
