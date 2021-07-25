//PROGRAM TO REVERSE THE Circular Double LINK LIST

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
 struct node *prev;
 int data;
 struct node *next;
};

typedef struct node std;
std *start,*last;

void main()
{
 std *temp,*t,*i;
 int n,j,k;
 clrscr();
 start=(std*)malloc(sizeof(std));
 last=(std*)malloc(sizeof(std));
 start->next=NULL;
 last->prev=NULL;

 printf("\nEnter the no. of elements\n");
 scanf("%d",&n);

 for(j=0;j<n;j++,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  printf("\nEnter the no.: ");
  scanf("%d",&temp->data);
  temp->next=NULL;
  temp->prev=NULL;

  if(start->next==NULL)
  {
   start->next=temp;
   last->prev=temp;
   temp->next=start->next;
   temp->prev=last->prev;
  }
  else
  {
   t->next=temp;
   temp->prev=t;
  }
 }

 last->prev=temp;
 temp->next=start->next;
 start->next->prev=temp;


 printf("\nThe Elements in the list are:\n");
 for(t=start->next,j=1;t!=start->next||j==1;t=t->next,j=0)
  printf("%d ",t->data);

 for(j=0,i=last->prev,t=start->next;j<n/2;j++,t=t->next,i=i->prev)
 {
    k=t->data;
    t->data=i->data;
    i->data=k;
 }

 printf("\nThe Elements After reversing are:\n");
 for(t=start->next,j=1;t!=start->next||j==1;t=t->next,j=0)
  printf("%d ",t->data);

getch();
}
