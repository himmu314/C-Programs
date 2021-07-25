


// REAL PROGRAM IS ON THE
// UDAY LAPTOPj



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define N 2

struct rec
{
 char *name;
 int *age;
 float sal;
}r[N],local;

void  main()
{
 int i,j,k,t,s;
 char *ch;
 clrscr();

 printf("\nEnter the %d recods",N);
 printf("\nName, Age, Salary\n");

 for(i=0;i<N;i++)
 {

  fflush(stdin);
  r[i].name=(char*)malloc(15);
  gets(r[i].name);
  r[i].age=(int*)malloc(sizeof(int));
  scanf("%d",&t);
 *r[i].age=t;
 scanf("%f",&s);
 r[i].sal=s;
 }

 printf("\nAfter the Sorting:-\n\nName\t\tAge\tSalary\n");
 for(i=0;i<N;i++)
 {
   printf("%s\t\t%d\t%f\n",r[i].name,*r[i].age,r[i].sal);
 }

 getch();

}