//SORTING IN CIRCULAR LINk LIST

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
  int n,k,l;
  clrscr();
  start->next=NULL;

  printf("\nEnter the No. Of Elements:-\n");
  scanf("%d",&n);

  for(;n>0;n--,i=temp)
  {
   temp=(std*)malloc(sizeof(std));
   printf("\nEnter the No.: ");
   scanf("%d",&temp->data);

   if(start->next==NULL)
   {
     start->next=temp;
     temp->next=start->next;
    }
   else
   {
    i->next=temp;
    temp->next=start->next;
   }
  }

  for(i=start->next;i->next!=start->next;i=i->next) //this loop run, one tym less
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

  for(i=start->next,n=1;i!=start->next||n==1;i=i->next,n=0)
   printf("%d ",i->data);

 getch();
}