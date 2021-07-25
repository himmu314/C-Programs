//PROGRAM OF Splitting In CIRCULAR Link List

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

 for(i=0;i<n;i++,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);

    if(start->next==NULL)
     start->next=temp;
    else
     t->next=temp;

   temp->next=start->next;
   }
 }

 printf("\nThe Elements in the list are:\n");
 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
  printf("%d ",t->data);

 for(i=1,t=start->next;i<(n+1)/2;i++,t=t->next);
 start1->next=t->next;
 t->next=start->next;

 for(t=start1->next;t->next!=start->next;t=t->next);
 t->next=start1->next;


 printf("\nThe Elements in 1st Part Are:\n");
 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
  printf("%d ",t->data);

 printf("\nThe Elements in 2nd Part Are:\n");
 for(t=start1->next,i=1;t!=start1->next||i==1;t=t->next,i=0)
  printf("%d ",t->data);

 getch();
}