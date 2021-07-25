#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,k;
 char str[]="123456789";
 clrscr();

 for(i=0;i<5;i++)
 {
   k=i-1;
   for(j=0;j<5+i;j++)
   {


    if(j<4-i)
    printf(" ");
    else
    {

     if(j>=5)
     printf("%c",str[--k]);
     else
     printf("%c",str[++k]);
    }
   }
   printf("\n");
 }

 getch();
}