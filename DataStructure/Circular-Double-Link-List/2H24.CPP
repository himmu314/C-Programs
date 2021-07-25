//PROGRAM OF Duplicacy Removal In Circular Double Link List

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
 std *temp,*t,*j,*k;
 int n,i;
 start=(std*)malloc(sizeof(std));
 last=(std*)malloc(sizeof(std));
 start->next=NULL;
 last->prev=NULL;
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
 }

 last->prev=temp;
 temp->next=start->next;
 start->next->prev=temp;


 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
 {
   for(j=t->next;j!=start->next;)
    if(t->data==j->data)
    {
       j->prev->next=j->next;
       j->next->prev=j->prev;

       if(j->next==start->next)
       last->prev=j->prev;

       k=j;
       j=j->next;
       free(k);

    }
    else
     j=j->next;
 }


 printf("\nThe Elements After Removing duplicate no. are:\n");
 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
  printf("%d ",t->data);

 getch();
}