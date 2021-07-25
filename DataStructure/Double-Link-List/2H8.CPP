//PROGRAM OF MERGING THE ELEMENTS IN THE LIST


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
std *start1,*start2,*start3,*last1,*last2,*last3;

void main()
{
 std *i,*j,*k,*temp,*t;
 int n1,n2,jj;
 start1=(std*)malloc(sizeof(std));
 start2=(std*)malloc(sizeof(std));
 start3=(std*)malloc(sizeof(std));
 last1=(std*)malloc(sizeof(std));
 last2=(std*)malloc(sizeof(std));
 last3=(std*)malloc(sizeof(std));


 start1->next=NULL;
 start2->next=NULL;
 start3->next=NULL;
 last1->prev=NULL;
 last2->prev=NULL;
 last3->prev=NULL;
 clrscr();

 printf("\nEnter the no. of Terms For 1st List\n");
 scanf("%d",&n1);

 for(jj=1;jj<=n1;jj++,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;

    if(start1->next==NULL)
    {
     start1->next=temp;
     last1->prev=temp;
    }
    else
    {
     t->next=temp;
     temp->prev=t;
     last1->prev=temp;
    }

   }
 }


 printf("\nEnter the no. of Terms For 2nd List\n");
 scanf("%d",&n2);

 for(jj=1;jj<=n2;jj++,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;

    if(start2->next==NULL)
     start2->next=temp;
    else
    {
     t->next=temp;
     temp->prev=t;
    }
    last2->prev=temp;
   }
 }

 k=start3;
 for(i=start1->next,j=start2->next;(i!=NULL)&&(j!=NULL);k=k->next)
 {
  if(i->data<j->data)
  {
   k->next=i;
   i=i->next;
  }
  else
   {
    k->next=j;
    j=j->next;
   }
   last3->prev=k->next;
 }

 while(i!=NULL)
 {

  k->next=i;
  last3->prev=i;
  i=i->next;
  k=k->next;
 }

 while(j!=NULL)
 {
  k->next=j;
  last3->prev=j;
  j=j->next;
  k=k->next;
 }

 k->next=NULL;

 printf("\nThe Elements After The Merging are:\n");
 for(t=start3->next;t!=NULL;t=t->next)
  printf("%d ",t->data);

 getch();
}