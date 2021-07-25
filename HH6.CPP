#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 char str[20];
 int i,j,l;
 clrscr();

 printf("\nEnter the string\n");
 gets(str);

 l=strlen(str);

 for(i=0;i<l/2;i++)
  if(!((str[i]==str[l-1-i])||(str[i]==str[l-1-i]-32)||(str[i]==str[l-1-i]+32)))
   break;

 if(i==l/2)
 printf("\nIt is Palindrome");
 else
 printf("\nIt is not a Palindrome");

 getch();
}