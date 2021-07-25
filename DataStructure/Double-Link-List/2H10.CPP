//PROGRAM OF Duplicacy Removal In Double Link List

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
     start->next=temp;
    else
    {
     t->next=temp;
     temp->prev=t;
    }
    last->prev=temp;
   }
 }


 for(t=start->next;t!=NULL;t=t->next)
 {
   for(j=t->next;j!=NULL;)
    if(t->data==j->data)
    {
       j->prev->next=j->next;
       j->next->prev=j->prev;

       if(j->next==NULL)
       last->prev=j->prev;

       k=j;
       j=j->next;
       free(k);

    }
    else
     j=j->next;
 }


 printf("\nThe Elements After Removing duplicate no. are:\n");
 for(t=start->next;t!=NULL;t=t->next)
  printf("%d ",t->data);

 getch();
}