#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char coding(char);
char decoding(char);

void main()
{
 char str[100];
 int i;
 clrscr();

 printf("\nEnter the string For Coading it:\n");
 gets(str);
 fflush(stdin);

 for(i=0;str[i]!='\0';i++)
  str[i]=coding(str[i]);

  printf("\nString After Coding:\n%s",str);

  getch();
  fflush(stdin);

  printf("\n\nEnter the string for Decoding\n");
  gets(str);

  for(i=0;str[i]!='\0';i++)
   str[i]=decoding(str[i]);

   printf("\nString after the Decoding is:\n%s",str);

 getch();
}

char coding(char ch)
{
 if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
 {
   if(ch=='z'||ch=='Z')
   return (ch-25);
   else
   return ch+1;
 }
 else
 return ch;
}

char decoding(char ch)
{
 if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
 {
  if(ch=='a'||ch=='A')
  return (ch+25);
  else
  return ch-1;

 }
 else
 return ch;
}