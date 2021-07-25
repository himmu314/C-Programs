//ManuDriven Program Of CIRCULAR Link List

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

void creation();
void insertion();
void deletion();
void display();

void main()
{
 int n;
 start->next=NULL;
 clrscr();

 while(1)
 {
  printf("\nChoose The option\n1. Create a list\n2. Insertion\n3. Deletion\n4. Display\n5. Exit\n");
  scanf("%d",&n);

  switch(n)
  {
   case 1: creation(); break;
   case 2: insertion(); break;
   case 3: deletion(); break;
   case 4: display(); break;
   case 5: return;
   default : printf("\nYou enter the wrong value\n");
  }

 }
}


void creation()
{
  std *temp,*t;
  int n;

 if(start->next!=NULL)
 {
  printf("\nThe LIST is alredy Created\n");
  getch();
  return;
 }

 printf("\nEnter the No. Of Elements\n");
 scanf("%d",&n);

 for(;n>0;n--,t=temp)
 {
   temp=(std*)malloc(sizeof(std));

   printf("\nEnter the No. : ");
   scanf("%d",&temp->data);

   if(start->next==NULL)
     start->next=temp;
   else
     t->next=temp;

   temp->next=start->next;
 }
}


void display()
{
 std *f;
 if(start->next==NULL)
  printf("\nThe List Is EMPTY\n");
  else
  {
   printf("\nThe List Is:-\n");
   f=start->next;
   do
   {
    printf("%d ",f->data);
    f=f->next;
   } while(f!=start->next);
  }
}


void insertion()
{
  std *temp,*t,*k;
  int n,i=1,pos;

  printf("\nChoose The Option of INSERTION\n1. Begning\n2. Last\n3. Position\n");
  scanf("%d",&n);
  temp=(std*)malloc(sizeof(std));

  if(n==1)
  {
    printf("\nEnter the no. : ");
    scanf("%d",&temp->data);

    if(start->next==NULL)
     {
      start->next=temp;
      temp->next=start->next;
     }
    else
    {
     for(t=start->next;t->next!=start->next;t=t->next);
      temp->next=start->next;
      start->next=temp;
      t->next=start->next;
    }
  }
  else
  if(n==2)
  {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);

    if(start->next==NULL)
     {
      start->next=temp;
      temp->next=start->next;
     }
    else
    {
     for(t=start->next;t->next!=start->next;t=t->next);
     t->next=temp;
     temp->next=start->next;
    }
  }
  else
  if(n==3)
  {
    if(start->next==NULL)
     i=0;
    else
     for(t=start->next;t->next!=start->next;t=t->next,i++);

    printf("\nEnter the position(1-%d): ",i+1);
    scanf("%d",&pos);

    if(pos<=0||pos>=i+2)
    {
     printf("\nInvalide Position\n");
     getch();
     return;
    }

    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);

    t=start;
    for(i=1;i<pos;i++)
     t=t->next;

    if(pos==1)
    for(k=start->next;k->next!=start->next;k=k->next);
     k->next=temp;

    temp->next=t->next;
    t->next=temp;

    if(temp->next==NULL)
     temp->next=start->next;



  }
  else
  printf("\nYou Enter the wrong value\n");

}

void deletion()
{
 int n,i,pos;
 std *t,*t1,*k;

 if(start->next==NULL)
 {
  printf("\nTHe LIST iS empty\n");
  getch();
  return;
 }

 printf("\nChoose the option Of Deletion\n1. Begning\n2. Last\n3. Position\n");
 scanf("%d",&n);

 if(n==1)
 {
   t=start->next;
   start->next=t->next;
   for(t1=start->next;t1->next!=t;t1=t1->next);
   if(start->next==t)
    start->next=NULL;
   else
    t1->next=start->next;
 }
 else
 if(n==2)
 {
   for(t=start->next,t1=start;t->next!=start->next;t1=t,t=t->next);

   if(t1->next==start->next)
    start->next=NULL;
   else
    t1->next=start->next;
 }
 else
 if(n==3)
 {
   for(t=start->next,i=1;t->next!=start->next;i++,t=t->next);
   printf("\nEnter The  Position(1-%d): ",i);
   scanf("%d",&pos);

   if(pos<1||pos>i)
   {
    printf("\nYou Enter The Wrong Value\n");
    getch();
    return;
   }

   for(t=start->next,t1=start,i=1;i<pos;i++,t1=t,t=t->next);
   if(t1->next==t->next)
    start->next=NULL;
   else
    {
     t1->next=t->next;
     if(pos==1)
     for(k=start->next;k->next!=t;k=k->next);
     k->next=start->next;
    }
 }
 else
  {
   printf("\nYou Enter the wrong value\n");
   return;
  }

  printf("\n%d No. Is Deleted\n",t->data);
  free(t);
}