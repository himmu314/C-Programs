#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 int val;
 struct node *next;
}node;

node *start;

void add();
void del();
void traverse();


int main()
{
  int n;
  start=NULL;

  while(1)
  {
    printf("\nChoose Option:\n1. Add Element\n2. Traverse\n3. Delete\n4. Exit\n:- ");
    scanf("%d",&n);
    switch(n)
    {
      case 1: add(); break;
      case 2: traverse(); break;
      case 3: del(); break;
      case 4: return 0;
      default: printf("Invalid Input\n");
    }
  }
    
 return 0;
}



void add()
{
  int n;
  node *temp,*tp;
  temp=(node*)malloc(sizeof(node));

  printf("\nEnter The No.: ");
  scanf("%d",&temp->val);
  temp->next=NULL;

  if(start==NULL)
    start=temp;
  else
  {
   tp=start;  
   while(tp->next!=NULL)
     tp=tp->next;
   tp->next=temp;
  }

}


void traverse()
{
  node *tp;
  tp=start;

  if(tp==NULL)
   printf("\nLink List Is EMPTY\n");
  else
  {
   
    printf("\nElements Are:\n");
    while(tp!=NULL)
    {
      printf("%d ",tp->val);
      tp=tp->next;
     }
  }

}


void del()
{
  int n;
  node *temp,*ptr;

  if(start==NULL)
  {
    printf("\nLink List Is EMPTY\n");
    return;
  }

 printf("\nEnter The No.: ");
 scanf("%d",&n);
 
 ptr=start;

 if(ptr->val==n)
  {
    printf("%d Deleted\n",n);
    start=start->next;
    free(ptr);
    return;
  }
 else
  {
    while(ptr->next->next!=NULL)
    {
     if(ptr->next->val==n)
      {
        temp=ptr->next;
        ptr->next=temp->next;
       printf("\n%d Deleted\n",temp->val);
       free(temp);
       return;
      }
     ptr=ptr->next;
    }
  
   if(ptr->next->val==n)
   {
     temp=ptr->next;
      printf("\n%d Deleted\n",temp->val);
       free(temp);
      ptr->next=NULL;
      return;
   }
  }

  printf("\nElement Not Found\n");

}






