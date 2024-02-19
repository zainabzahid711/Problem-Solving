#include <iostream>
using namespace std;
int main()
{
  //**********************Count letters******Question 1

  // char string[50];
  // cout<<"Enter string value"<<endl;
  // cin.getline(string,50);
  // int i=0;
  // while (string[i] != '\0')
  // i++;
  // cout<<"Length of your string is "<<i<<endl;

  //****************************Count words******Question 2
  // char word[50];
  // int i=0,count=1;
  // cout<<"Enter sentence"<<endl;
  // cin.getline(word,50);
  // while (word[i]!='\0')
  // {
  //     if (word[i]==32)
  //     {
  //         count++;
  //     }
  //     i++;
  // }
  // cout<<"Number of words are "<<count<<endl;

  //***************************Reverse string*********Question 3
  // char word[50];
  // int i,j=0;
  // cout<<"Enter a sentence"<<endl;
  // cin.getline(word,50);

  //  for (i = 0; word[i]!='\0'; i++)
  //  {
  //     j++;
  //  }
  //  cout<<endl<<"Reverse string is "<<endl;
  // for ( i = j ; i >=0; i--)
  // {
  //     cout<<word[i];
  // }

  //****************************Loweer to upper*******Question 4
  // char arr[50];
  // int i=0;
  // cout<<"Enter Lowercase word "<<endl;
  // cin.getline(arr,50);
  // for ( i = 0; arr[i]!='\0'; i++)
  // {
  //   if (arr[i]>=97 && arr[i] <=122)
  //   {
  //     arr[i]=arr[i]-32;
  //   }
  // }
  // cout<<"Upper case is "<<arr<<endl;

  //*********************************Upper to lower********Question 5
  // char arr[50];
  // int i=0;
  // cout<<"Enter Uppercase word "<<endl;
  // cin.getline(arr,50);
  // for ( i = 0; arr[i]!='\0'; i++)
  // {
  //   if (arr[i]>=65 && arr[i] <=90)
  //   {
  //     arr[i]=arr[i]+32;
  //   }
  // }
  // cout<<"Lower case is "<<arr<<endl;

  //***********************Fist latter capital**********Question 6
  // char stri[50];
  // int c=1;
  // cout<<"Enter a sentence "<<endl;
  // cin.getline(stri,50);
  // for (int i = 0; stri[i]!='\0'; i++)
  //{

  // if (c==1 && stri[i]>=97 && stri[i]<=122)
  //{
  // stri[i]=stri[i]-32;
  // c=0;
  //}
  // if (stri[i]==32)
  // c=1;
  // else
  // c=0;
  //}
  // cout<<stri<<endl;

  //**************************Palidrome**********Question 7
  char word[50], rev[50];
  cout << "Enter a sentence" << endl;
  cin.getline(word, 50);
  //**********Length of string
  int i = 0;
  while (word[i] != '\0')
  {
    i++;
  }
  //***************reverse of string

  for (i = 0; i >= 0; i--)
  {
    word[i];
    i++;
  }
  rev[i] = '\0';
  // //****************Equalize rev and main string
  i = 0;
  int count = 0;
  while (word[i] != '\0')
  {
    word[i] != rev[i];
    break;
  }
  if (word[i] != '\0')
    cout << "not palidrome" << endl;
  else
    cout << "Palidrome" << endl;

  //******************************Voval*******Question 8
  // char stri[50];
  // cout<<"Enter string"<<endl;
  // cin.getline(stri,50);
  // int i=0,c=0;
  // while (stri[i]!='\0')
  // {
  //     switch (stri[i])
  //     {
  //     case 'a':
  //     case 'e':
  //     case 'i':
  //     case 'o':
  //     case 'u':
  //     c++;
  //     }
  // i++;
  // }
  // cout<<"No of voval words are \t"<<c<<endl;

  //**********************************Question 9

  // char a[25],b[25],c[50];
  // int i=0,j=0;
  // cout<<"Enter First name "<<endl;
  // cin.getline(a,25);
  // cout<<"Enter Second name "<<endl;
  // cin.getline(b,25);
  // while (a[i]!='\0')
  // {
  //     c[i]=a[i];
  //     i++;
  // }
  // c[i++]=' ';
  // while (b[j]!='\0')
  // {
  //     c[i]=b[j];
  //     j++;
  //     i++;
  // }
  // c[i]='\0';
  // cout<<"Your full name is "<<endl<<c<<endl;

  // char word[50],rev[50];
  // cout<<"Enter a sentence"<<endl;
  // cin.getline(word,50);
  // //**********Length of string
  // int l=0;
  // while (word[l]!='\0')
  // {
  // l++;
  // }
  // //***************reverse of string
  // int i=0;
  // for (int  j = l-1; j >= 0; j--)
  // {
  //   rev[i]=word[j];
  //   i++;
  // }
  // rev[i]='\0';
  // //****************Equalize rev and main string
  // i=0;
  // int count =0;
  // while(word[i]!='\0')
  // {

  //   if (word[i]==rev[i])
  //   count++;
  //   // break;

  //   i++;
  // }

  // // if (word[i]=='\0')
  // if(l==count)
  // cout<<"palidrome"<<endl;
  // else
  // cout<<"not Palidrome"<<endl;
}
