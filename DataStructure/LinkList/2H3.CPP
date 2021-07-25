#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char a[20];
 int i,j,k,l,n1,n2;
 clrscr();

 printf("\nEnter the string\n");
 gets(a);

 l=strlen(a);

 printf("\n");

 for(i=0;i<l;i++)
 {
  n1=1;

   for(j=i+1;n1<l;n1++,j++)
   {
    printf("%c",a[i]);
    n2=1;
    if(j==l)
     j=0;

    if(a[j]==a[i])
     continue;

     for(k=j;n2<=l;n2++,k++)
     {
      if(k==l)
       k=0;

      if(a[k]==a[i])
       continue;

      printf("%c",a[k]);

     }
     printf("\n");

   }
 }

  getch();
}