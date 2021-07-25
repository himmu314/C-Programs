//PROGRAM OF MERGING THE ELEMENTS IN THE LIST


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

void main()
{
 std *i,*j,*k,*temp,*t;
 int n1,n2,jj;
 start1=(std*)malloc(sizeof(std));
 start2=(std*)malloc(sizeof(std));
 start3=(std*)malloc(sizeof(std));

 start1->next=NULL;
 start2->next=NULL;
 start3->next=NULL;
 clrscr();

 printf("\nEnter the no. of Terms For 1st List\n");
 scanf("%d",&n1);

 for(jj=1;jj<=n1;jj++)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start1->next==NULL)
     start1->next=temp;
    else
    t->next=temp;

    t=temp;

   }
 }


 printf("\nEnter the no. of Terms For 2nd List\n");
 scanf("%d",&n2);

 jj=1;
 while(jj<=n2)
 {
  temp=(std*)malloc(sizeof(std));
  if(temp==NULL)
   printf("\nThere is no space\n");
  else
   {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start2->next==NULL)
     start2->next=temp;
    else
    t->next=temp;

    t=temp;
    jj++;

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

 }

 while(i!=NULL)
 {

  k->next=i;
  i=i->next;
  k=k->next;
 }

 while(j!=NULL)
 {
  k->next=j;
  j=j->next;
  k=k->next;
 }

 k->mext=NULL;

 printf("\nThe Elements After The Merging are:\n");
 t=start3->next;
 while(t!=NULL)
 {
  printf("%d ",t->data);
  t=t->next;
 }
 getch();
}