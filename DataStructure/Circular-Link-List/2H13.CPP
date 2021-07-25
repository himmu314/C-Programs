///SEARCH THE ELEMENT IN THE CIRCULAR Link List

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
 std *temp,*t;
 int n,f;
 clrscr();
 start->next=NULL;

 printf("\nEnter the no. of elements\n");
 scanf("%d",&n);

 for(;n>0;n--,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  printf("\nEnter the no.: ");
  scanf("%d",&temp->data);

  if(start->next==NULL)
  {
   start->next=temp;
   temp->next=start->next;
  }

  else
  {
   t->next=temp;
   temp->next=start->next;
  }
 }
 printf("Enter the No. You Want to search\n");
 scanf("%d",&f);

 for(n=1,t=start->next;t!=start->next||n==1;t=t->next,n++)
  if(t->data==f)
   break;

 if(t!=start->next||n==1)
  printf("\nThe Element Is Found On %d Position\n",n);
 else
 printf("\nThe Element Is Not Present\n");

getch();
}
