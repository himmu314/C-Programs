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

 while(n>0)
 {
    temp=(std*)malloc(sizeof(std));

   printf("\nEnter the No. : ");
   scanf("%d",&temp->data);
   temp->next=NULL;

   if(start->next==NULL)
    start->next=temp;
   else
    t->next=temp;

   t=temp;
   n--;
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
   while(f!=NULL)
   {
    printf("%d ",f->data);
    f=f->next;
   }
  }
}

void insertion()
{
  std *temp,*f,*g;
  int n,i,pos,c=1;

  printf("\nChoose The Option of INSERTION\n1. Begning\n2. Last\n3. Position\n");
  scanf("%d",&n);
  temp=(std*)malloc(sizeof(std));

  if(n==1)
  {
    printf("\nEnter the no. : ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start->next==NULL)
     start->next=temp;
    else
    {
     temp->next=start->next;
     start->next=temp;
    }
  }
  else
  if(n==2)
  {
    printf("\nEnter the No.: ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start->next==NULL)
     start->next=temp;
    else
    {
     f=start->next;
     while(f->next!=NULL)
      f=f->next;

     f->next=temp;
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

    f=start;
    for(i=1;i<pos;i++)
     f=f->next;

    temp->next=f->next;
    f->next=temp;
  }
  else
  printf("\nYou Enter the wrong value\n");

}

void deletion()
{
 int n,i,pos;
 std *t,*t1;

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
 }
 else
 if(n==2)
 {
   for(t=start;t->next!=NULL;t1=t,t=t->next);
   t1->next=NULL;
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

   for(t=start,i=1;i<=pos;i++,t1=t,t=t->next);
   t1->next=t->next;
 }
 else
  {
   printf("\nYou Enter the wrong value\n");
   return;
  }

  printf("\n%d No. Is Deleted\n",t->data);
  free(t);
}