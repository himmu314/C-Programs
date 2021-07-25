#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 int n;
 struct node *next;
}node;

node *start,*top;
void push();
void pop();
void disp();


int main()
{
 int n;
 start=NULL;
 top=NULL;

 while(1)
 {
  printf("\nChoose The Option:\n");
  printf("1. Push\n2. Pop\n3. Display\n4. Exit\n:- ");
  scanf("%d",&n);

   switch(n)
   {
     case 1: push(); break;
     case 2: pop(); break;
     case 3: disp(); break;
     case 4: return 0;
     default: printf("Invalid input\n");
   }

 }
  
 return 0;
}



void push()
{
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->next=NULL;

  printf("\nEnter The No: ");
  scanf("%d",&temp->n);

  if(start==NULL)
   {
     start=temp;
     top=temp;
   }
   else
   {
     node *ptr=start;
     while(ptr->next!=NULL)
      ptr=ptr->next;

    ptr->next=temp;
    top=temp;
   }  

}



void pop()
{

  if(start==NULL)
   printf("\nStack Is EMPTY\n");
  else if(top==start)
   {
      printf("\n%d Deleted\n",top->n);
      start=top=NULL;
   }
   else
  {
    node *ptr=start;
    while(ptr->next->next!=NULL)
      ptr=ptr->next;
   
    ptr->next=NULL;
    printf("\n%d Deleted\n",top->n);
    free(top);
    
    top=ptr;    
  }
}



void disp()
{
  node *ptr;

  if(start==NULL)
  {
    printf("\nStack  Is Empty\n");
    return;
  } 
 
  ptr=start;

  while(ptr!=NULL)
   {
     printf("%d ",ptr->n);
     ptr=ptr->next;
   }

}


