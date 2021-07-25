#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 int i,j,k;
 char str[100],ch[20];
 clrscr();

 printf("\nEnter the string To Convert it into Full Form\n");
 gets(str);

 j=0;
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]>=65&&str[i]<=90)
  ch[j++]=str[i];
 }

 ch[j]='\0';

 printf("\nThe full form Is:\n%s",ch);

 getch();

}