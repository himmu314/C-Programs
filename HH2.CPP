#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
 int l,i,j,count=0,f;
 char str[30];
 clrscr();
 printf("\nEnter the string\n");
 gets(str);

 l=strlen(str);

 for(i=0;i<l;i++)
 {
  count=0;
  f=0;
  for(j=i-1;j>=0;j--)
  if(str[i]==str[j])
  {
   f=1;
   break;
  }
  if(f==0)
  {
   for(j=i;j<l;j++)
   {
     if(str[i]==str[j])
      count++;
   }

   printf("\n'%c' occures '%d' Times",str[i],count);
  }
 }
 getch();
}