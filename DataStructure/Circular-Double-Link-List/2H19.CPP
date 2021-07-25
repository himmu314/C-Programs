//SORTING IN Circular Double LINk LIST

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
  std *temp,*i,*j;
  int n,k;
  clrscr();
  start=(std*)malloc(sizeof(std));
  last=(std*)malloc(sizeof(std));
  last->prev=NULL;
  start->next=NULL;

  printf("\nEnter the No. Of Elements:-\n");
  scanf("%d",&n);

  for(;n>0;n--,i=temp)
  {
   temp=(std*)malloc(sizeof(std));
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
    i->next=temp;
    temp->prev=i;
    last->prev=temp;
    temp->next=start->next;
    start->next->prev=temp;
   }
  }

  for(i=start->next,k=1;i!=start->next||k==1;i=i->next,k=0)
  {
   temp=i;
   for(j=i->next;j!=start->next;j=j->next)
    if(temp->data>j->data)
      temp=j;

     if(i!=temp)
    {
     n=i->data;
     i->data=temp->data;
     temp->data=n;
    }
  }

  printf("\nThe LIST After SORTING Is:\n");
  for(i=start->next;i->next!=start->next;i=i->next)
  printf("%d ",i->data);

  printf("%d",i->data);


 getch();
}