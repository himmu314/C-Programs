//SORTING IN Double LINk LIST

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
  int n;
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
    }
   else
   {
    i->next=temp;
    temp->prev=i;
    last->prev=temp;
   }
  }

  i=start->next;
  for(i=start->next;i!=NULL;i=i->next)
   for(j=i->next;j!=NULL;j=j->next)
    if(i->data>j->data)
    {
     n=i->data;
     i->data=j->data;
     j->data=n;
    }

  printf("\nThe LIST After SORTING Is:\n");
  i=start->next;
  while(i!=NULL)
  {
   printf("%d ",i->data);
   i=i->next;
  }

 getch();
}