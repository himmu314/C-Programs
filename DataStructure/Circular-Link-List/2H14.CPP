//PROGRAM TO REVERSE THE CIRCULAR LINK LIST

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
 std *temp,*i,*j,*m;
 int n,jj,k,l,p;
 clrscr();
 start->next=NULL;

 printf("\nEnter the no. of elements\n");
 scanf("%d",&n);

 for(jj=0;jj<n;jj++,i=temp)
 {
  temp=(std*)malloc(sizeof(std));
  printf("\nEnter the no.: ");
  scanf("%d",&temp->data);

  if(start->next==NULL)
   start->next=temp;
  else
   i->next=temp;

  temp->next=start->next;
 }

 printf("\nThe Elements in the list are:\n");
 for(i=start->next,jj=1;i!=start->next||jj==1;i=i->next,jj=0)
  printf("%d ",i->data);

 for(jj=0,i=start->next;jj<n/2;jj++,i=i->next)
 {
   for(j=start->next,l=1;l<n-jj;l++,j=j->next);

    k=j->data;
    j->data=i->data;
    i->data=k;

 }

 printf("\nThe Elements After reversing are:\n");
 for(i=start->next,jj=1;i!=start->next||jj==1;i=i->next,jj=0)
  printf("%d ",i->data);

getch();
}
