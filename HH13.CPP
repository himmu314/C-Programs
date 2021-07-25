#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define N 3

struct emp
{
 char name[30];
 long int eno,sal;
}n[N];


void main()
{
  int i,j,k;
  struct emp ch;
  clrscr();

  printf("\nEnter the details of employee\nName, Enrollment No., Salary\n");
  for(i=0;i<N;i++)
  {
  fflush(stdin);
   gets(n[i].name);
   fflush(stdin);
   scanf("%ld%ld",&n[i].eno,&n[i].sal);
  }

  for(i=0;i<N;i++)
  {
   k=i;
   for(j=i+1;j<N;j++)
    if(n[k].sal>n[j].sal)
      k=j;

      if(k!=i)
      {
       ch=n[i];
       n[i]=n[k];
       n[k]=ch;
      }

  }


  printf("\nThe Details Of Employee In Ascending Oder is\n\n");
  printf("E.No.\t\tName\t\t\t\tSalry\n");
  for(i=0;i<N;i++)
  {
   printf("%ld\t\t%s\t\t\t%ld\n",n[i].eno,n[i].name,n[i].sal);
  }

  getch();
}