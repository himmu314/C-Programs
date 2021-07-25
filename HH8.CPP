#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
 char str[10][30],ch[30];
 int i,j,k;
 clrscr();

 printf("\nEnter the 5 Names\n");
 for(i=0;i<5;i++)
 {
 fflush(stdin);
  gets(str[i]);
 }

 for(i=0;i<5;i++)
 {
  k=i;
  for(j=i+1;j<5;j++)
   if(strcmp(str[k],str[j])<0)
    k=j;

   if(k!=j)
   {
    strcpy(ch,str[k]);
    strcpy(str[k],str[i]);
    strcpy(str[i],ch);
   }

   printf("\n%s",str[i]);
 }

 printf("\nThe Names After Sorting in Descending order is:\n");
 for(i=0;i<5;i++)
 printf("\n%s",str[i]);

 getch();
}