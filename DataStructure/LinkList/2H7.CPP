//PROGRAM TO REVERSE THE LINK LIST

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
  n--;
 }




getch();
}
