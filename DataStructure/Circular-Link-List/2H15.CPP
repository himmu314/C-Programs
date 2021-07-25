//PROGRAM OF MERGING THE ELEMENTS IN THE Circular LIST


#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
 int data;
 struct node *next;
};
typedef struct node std;
std *start1,*start2,*start3;

void create(std *sim);

void main()
{
 std *i,*j,*k,*temp,*t;
 int jj,n1,n2;
 start1=(std*)malloc(sizeof(std));
 start2=(std*)malloc(sizeof(std));
 start3=(std*)malloc(sizeof(std));

 start1->next=NULL;
 start2->next=NULL;
 start3->next=NULL;
 clrscr();

 printf("\nEnter the no. of Terms For 1st List\n");
 create(start1);

 printf("\nEnter the no. of Terms For 2nd List\n");
 create(start2);

 k=start3;
 for(i=start1->next,j=start2->next,n1=1,n2=1;(i!=start1->next||n1==1)&&(j!=start2->next||n2==1);k=k->next)
 {
  if(i->data<j->data)
  {
   k->next=i;
   i=i->next;
   n1=0;
  }
  else
   {
    k->next=j;
    j=j->next;
    n2=0;
   }

 }

 while(i!=start1->next)
 {

  k->next=i;
  i=i->next;
  k=k->next;
 }

 while(j!=start2->next)
 {
  k->next=j;
  j=j->next;
  k=k->next;
 }

 k->next=start3->next;

 printf("\nThe Elements After The Merging are:\n");
 for(t=start3->next,n1=1;t!=start3->next||n1==1;t=t->next,n1=0)
  printf("%d ",t->data);

 getch();
}

void create(std *sim)
{
 std *t,*temp;
 int n,j;

 scanf("%d",&n);

 for(j=1;j<=n;j++,t=temp)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);

    if(sim->next==NULL)
     sim->next=temp;
    else
     t->next=temp;

    temp->next=sim->next;
   }
 }

}