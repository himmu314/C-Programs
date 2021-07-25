#include<conio.h>
#include<Stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 int n;
 char *str[7]={"Sun","M0n","Tue","Wed","Thu","Fri","Sat"};
 clrscr();

 printf("\nEnter the No. between 0 to 6\n");
 scanf("%d",&n);

 if(n>6||n<0)
 printf("\nYou Enter The Wrong value\n");
 else
 {
  printf("\n%s",str[n]);
 }

 getch();
}