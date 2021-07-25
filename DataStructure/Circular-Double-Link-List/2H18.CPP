//Program of Manu driven of Circular DOUBLE LINK LIST

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
    start->next=temp;
   else
   {
     temp->prev=t;
     last->prev=temp;
     t->next=temp;
   }
   last->prev=temp;
   temp->next=start->next;
   start->next->prev=last->prev;
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
   for(f=start->next;f->next!=start->next;f=f->next)
    printf("%d ",f->data);

  printf("%d",f->data);
 }
 else
  if(n==2)
  {
   printf("\nThe List Is:-\n");
   for(f=last->prev;f->prev!=last->prev;f=f->prev)
    printf("%d ",f->data);

   printf("%d",f->data);
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
     temp->next=start->next;
     temp->prev=last->prev;
    }
    else
    {
     temp->next=start->next;
     start->next=temp;
     temp->next->prev=temp;
     temp->prev=last->prev;
     last->prev->next=temp;

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
     temp->next=start->next;
     temp->prev=last->prev;
    }
    else
    {
     temp->next=start->next;
     temp->prev=last->prev;
     last->prev->next=temp;
     last->prev=temp;
     start->next->prev=temp;
    }
  }
  else
  if(n==3)
  {
    if(start->next==NULL)
     c=0;
     else
      for(f=start->next;f->next!=start->next;c++,f=f->next);

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

    if(start->next==NULL)
    {
      start->next=temp;
      last->prev=temp;
      temp->prev=last->prev;
      temp->next=start->next;
    }
    else
    {
     temp->next=f->next;
     temp->prev=f;
     f->next=temp;
     temp->next->prev=temp;

     if(temp->prev==start)
      {
       temp->prev=last->prev;
       last->prev->next=temp;
      }

    if(temp->next==start->next)
      last->prev=temp;
    }
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
   if(t->next==start->next)
   {
    start->next=NULL;
    last->prev=NULL;
   }
   else
   {
    start->next=t->next;
    last->prev->next=t->next;
    t->next->prev=last->prev;
   }
 }
 else
 if(n==2)
 {
  t=last->prev;
  if(start->next==t)
  {
   start->next=NULL;
   last->prev=NULL;
  }
  else
  {
  last->prev=t->prev;
  t->prev->next=start->next;
  start->next->prev=t->prev;
  }
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

   t=start->next;
   if(t->next==start->next)
   {
    start->next=NULL;
    last->prev=NULL;
   }
   else
   {
    for(i=1;i<pos;i++,t=t->next);
    t->prev->next=t->next;
    t->next->prev=t->prev;

    if(t->next==start->next)
     last->prev=t->prev;
    if(t->prev==last->prev)
     start->next=t->next;
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