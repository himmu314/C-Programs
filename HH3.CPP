#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
 char str[30],ch;
 int i,l=0,j,k;
 clrscr();

 printf("\nEnter the string\n");
 gets(str);

 printf("\nString after the sorting\n");

 l=strlen(str);

 for(i=0;i<l;i++)
 {
  k=i;
  for(j=i+1;j<l;j++)
   if(str[k]>str[j])
    k=j;

  if(k!=i)
  {
   ch=str[i];
   str[i]=str[k];
   str[k]=ch;
  }
 }

 printf("%s",str);

 getch();
}