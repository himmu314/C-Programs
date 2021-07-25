//SORTING IN LINk LIST

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
 int data;
 struct node *next;
};

typedef struct node std;
std *start;

void main()
{
  std *temp,*i,*j;
  int n;
  clrscr();
  start->next=NULL;

  printf("\nEnter the No. Of Elements:-\n");
  scanf("%d",&n);

  while(n>0)
  {
   temp=(std*)malloc(sizeof(std));
   printf("\nEnter the No.: ");
   scanf("%d",&temp->data);
   temp->next=NULL;

   if(start->next==NULL)
    start->next=temp;
   else
    i->next=temp;

   i=temp;
   n--;
  }

  i=start->next;
  while(i!=NULL)
  {
   j=i->next;
   while(j!=NULL)
   {
    if(i->data>j->data)
    {
     n=i->data;
     i->data=j->data;
     j->data=n;
    }
    j=j->next;
   }
   i=i->next;
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