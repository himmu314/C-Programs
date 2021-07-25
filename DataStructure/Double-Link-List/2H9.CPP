//PROGRAM OF Splitting In Double Link List

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
std *start,*start1,*last1,*last;

void main()
{
 std *temp,*t;
 int n,i;
 start=(std*)malloc(sizeof(std));
 start1=(std*)malloc(sizeof(std));
 last=(std*)malloc(sizeof(std));
 last1=(std*)malloc(sizeof(std));
 start->next=NULL;
 start1->next=NULL;
 last->prev=NULL;
 last1->prev=NULL;
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
     start->next=temp;
    else
    {
     t->next=temp;
     temp->prev=t;
    }
    last->prev=temp;
   }
 }

 printf("\nThe Elements in the list are:\n");
 for(t=start->next;t!=NULL;t=t->next)
  printf("%d ",t->data);

 for(i=1,t=start->next;i<(n+1)/2;i++,t=t->next);
 last1->prev=last->prev;
 start1->next=t->next;
 start1->next->prev=NULL;

 last->prev=t;
 t->next=NULL;


 printf("\nThe Elements in 1st Part Are:\n");
 for(t=start->next;t!=NULL;t=t->next)
  printf("%d ",t->data);

 printf("\nThe Elements in 2nd Part Are:\n");
 for(t=start1->next;t!=NULL;t=t->next)
  printf("%d ",t->data);

 getch();
}