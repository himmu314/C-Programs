///SEARCH THE ELEMENT IN THE ARRAY

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
	       78451203.690990997727.3.11111600650.3
	       4025120
	       2342.563
 printf("\nEnter the no. of elements\n");
 scanf("%d",&n);

 while(n>0)
 {
  temp=(std*)malloc(sizeof(std));
  printf("\nEnter the no.: ");
  scanf("%d",&temp->data);
  temp->next=NULL;

  if(start->next==NULL)
   start->next=temp;
  else
   t->next=temp;
  t=temp;
  nter the No. You Want to search\n");
 scanf("%d",&f);

 t=start->next;
 n=1;
 while(t!=NULL)
 {
  if(t->data==f)
  break;
  n++;
  t=t->next;
 }

 if(t!=NULL)
  printf("\nThe Element Is Found On %d Position\n",n);
 else
 printf("\nThe Element Is Not Present\n");

getch();
}
