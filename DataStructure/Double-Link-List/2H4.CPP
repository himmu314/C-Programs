//Program of Manu driven of DOUBLE LINK LIST

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
std *start,*last;

void creation();
void insertion();
void deletion();
void display();

void main()
{
 int n;
 start=(std*)malloc(sizeof(std));
 last=(std*)malloc(sizeof(std));
 last->prev=NULL;
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
   temp->next=NULL;
   temp->prev=NULL;

   if(start->next==NULL)
   {
    start->next=temp;
    last->prev=temp;
   }
   else
   {

     temp->prev=t;
     last->prev=temp;
     t->next=temp;
   }
 }

}


void display()
{
 std *f;
 int n;
 if(start->next==NULL)
 {
  printf("\nThe List Is EMPTY\n");
  return;
 }
 printf("\nChoose the option of display\n1. Forward\n2. Backward\n");
 scanf("%d",&n);

 if(n==1)
 {
   printf("\nThe List Is:-\n");
   for(f=start->next;f!=NULL;f=f->next)
    printf("%d ",f->data);
 }
 else
  if(n==2)
  {
   printf("\nThe List Is:-\n");
   for(f=last->prev;f!=NULL;f=f->prev)
    printf("%d ",f->data);
  }
  else
  printf("\nYou enter the wrong value\n");
}


void insertion()
{
  std *temp,*f,*g;
  int n,i,pos,c=1;

  printf("\nChoose The Option of INSERTION\n1. Begning\n2. Last\n3. Position\n");
  scanf("%d",&n);
  temp=(std*)malloc(sizeof(std));
   temp->next=NULL;
   temp->prev=NULL;

  if(n==1)
  {
    printf("\nEnter the no. : ");
    scanf("%d",&temp->data);

    if(start->next==NULL)
    {
     start->next=temp;
     last->prev=temp;
    }
    else
    {
     temp->next=start->next;
     temp->next->prev=temp;
     start->next=temp;
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
     last->prev=temp;
    }
    else
    {
     for(f=start->next;f->next!=NULL;f=f->next);
     f->next=temp;
     temp->prev=f;
     last->prev=temp;
    }
  }
  else
  if(n==3)
  {
    if(start->next==NULL)
     c=0;
     else
    {
     f=start->next;
     while(f->next!=NULL)
     {
      c++;
      f=f->next;
     }
    }
    printf("\nEnter the position(1-%d): ",c+1);
    scanf("%d",&pos);

    if(pos<=0||pos>=c+2)
    {
     printf("\nInvalide Position\n");
     getch();
     return;
    }

    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);

    for(i=1,f=start;i<pos;i++,f=f->next);

    temp->next=f->next;
    temp->prev=f;
    f->next=temp;
    temp->next->prev=temp;

    if(temp->prev==start)
      temp->prev=NULL;

    if(temp->next==NULL)
     last->prev=temp;
  }
  else
  printf("\nYou Enter the wrong value\n");

}

void deletion()
{
 int n,i,pos;
 std *t;

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
   t->next->prev=NULL;
   if(t->next==NULL)
    last->prev=NULL;
 }
 else
 if(n==2)
 {
  t=last->prev;
  last->prev=t->prev;
  t->prev->next=NULL;
  if(t->prev==NULL)
   start->next=NULL;
 }
 else
 if(n==3)
 {
   for(t=start->next,i=0;t!=NULL;i++,t=t->next);
   printf("\nEnter The  Position(1-%d): ",i);
   scanf("%d",&pos);

   if(pos<1||pos>i)
   {
    printf("\nYou Enter The Wrong Value\n");
    getch();
    return;
   }

   for(t=start->next,i=1;i<pos;i++,t=t->next);
   t->prev->next=t->next;
   t->next->prev=t->prev;

   if(t->next==NULL)
    last->prev=t->prev;
   if(t->prev==NULL)
    start->next=t->next;
 }
 else
  {
   printf("\nYou Enter the wrong value\n");
   return;
  }

  printf("\n%d No. Is Deleted\n",t->data);
  free(t);
}