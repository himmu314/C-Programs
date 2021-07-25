//PROGRAM OF Duplicacy Removal In Double Link List

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
 std *temp,*t,*j,*k;
 int n,i,jj;
 start->next=NULL;
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

    if(start->next==NULL)
     start->next=temp;
    else
     t->next=temp;

    temp->next=start->next;
   }
 }


 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
 {
   k=t;
   for(j=t->next;j!=start->next;)
    if(t->data==j->data)
   {
    k->next=j->next;
    free(j);
    j=k->next;
   }
   else
   {
    j=j->next;
    k=k->next;
   }
 }


 printf("\nThe Elements After Removing duplicate no. are:\n");
 for(t=start->next,i=1;t!=start->next||i==1;t=t->next,i=0)
  printf("%d ",t->data);

 getch();
}