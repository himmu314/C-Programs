///SEARCH THE ELEMENT IN THE DOUBLE Link List

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
 std *temp,*t;
 int n,f;
 clrscr();
 start=(std*)malloc(sizeof(std));
 last=(std*)malloc(sizeof(std));
 start->next=NULL;
 last->prev=NULL;

 printf("\nEnter the no. of elements\n");
 scanf("%d",&n);

 for(;n>0;n--,t=temp)
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
  }

  else
  {
   t->next=temp;
   temp->prev=t;
   last->prev=temp;
  }
 }
 printf("Enter the No. You Want to search\n");
 scanf("%d",&f);

 for(n=1,t=start->next;t!=NULL;t=t->next,n++)
  if(t->data==f)
   break;

 if(t!=NULL)
  printf("\nThe Element Is Found On %d Position\n",n);
 else
 printf("\nThe Element Is Not Present\n");

getch();
}
