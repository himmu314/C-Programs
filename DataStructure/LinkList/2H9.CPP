//PROGRAM OF Splittimg

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
 int data;
 struct node *next;
};
typedef struct node std;
std *start,*start1;

void main()
{
 std *temp,*t;
 int n,i;
 start=(std*)malloc(sizeof(std));
 start1=(std*)malloc(sizeof(std));
 start->next=NULL;
 start1->next=NULL;
 clrscr();

 printf("\nEnter the no. of Terms\n");
 scanf("%d",&n);

 i=0;
 while(i<n)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start->next==NULL)
     start->next=temp;
    else
    t->next=temp;

    t=temp;
    i++;
   }
 }

 printf("\nThe Elements in the list are:\n");
 t=start->next;
 while(t!=NULL)
 {
  printf("%d ",t->data);
  t=t->next;
 }

t=start->next;
i=1;
for(;i<(n+1)/2;i++,t=t->next);

start1->next=t->next;
t->next=NULL;


 printf("\nThe Elements in 1st Part Are:\n");
 t=start->next;
 while(t!=NULL)
 {
  printf("%d ",t->data);
  t=t->next;
 }

 printf("\nThe Elements in 2nd Part Are:\n");
 t=start1->next;
 while(t!=NULL)
 {
  printf("%d ",t->data);
  t=t->next;
 }

 getch();
}