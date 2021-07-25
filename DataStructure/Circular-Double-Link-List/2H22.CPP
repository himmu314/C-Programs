//PROGRAM OF MERGING THE ELEMENTS IN THE Circular DOUBLE LINK LIST


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

void create(std *,std *);

void main()
{
 std *i,*j,*k,*temp,*t;
 int jj,ii;
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
 create(start1,last1);

 printf("\nEnter the no. of Terms For 2nd List\n");
 create(start2,last2);


 k=start3;
 for(i=start1->next,ii=1,j=start2->next,jj=1;(i!=start1->next||ii==1)&&(j!=start2->next||jj==1);k=k->next)
 {
  if(i->data<j->data)
  {
   k->next=i;
   i->prev=k;
   i=i->next;
   ii=0;
  }
  else
   {
    k->next=j;
    j->prev=k;
    j=j->next;
    jj=0;
   }
 }

 while(i!=start1->next)
 {

  k->next=i;
  i->prev=k;
  i=i->next;
  k=k->next;
 }

 while(j!=start2->next)
 {
  k->next=j;
  j->prev=k;
  j=j->next;
  k=k->next;
 }

 k->next=start3->next;
 last3->prev=k;
 start3->next->prev=k;

 printf("\nThe Elements After The Merging are:\n");
 for(t=start3->next,ii=1;t!=start3->next||ii==1;t=t->next,ii=0)
  printf("%d ",t->data);

 getch();
}

void create(std *start,std *last)
{
  int n;
  std *temp,*t;
  scanf("%d",&n);

 for(;n>0;n--,t=temp)
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

    if(start->next==NULL)
    {
     start->next=temp;
     last->prev=temp;
     temp->next=start->next;
     temp->prev=last->prev;
    }
    else
    {
     t->next=temp;
     temp->prev=t;
    }

   }
 }
 last->prev=temp;
 temp->next=start->next;
 start->next->prev=temp;

}