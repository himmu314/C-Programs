#include<stdio.h>

int a[10],front,rear;

void insert(int);
void del();
void traverse();


int main()
{
  int n,k;
  front=rear=-1;

  while(1)
  {
    printf("\nChoose The Option:\n1. Traverse\n2. Insertion\n3. Deletion\n4. Exit\n:- ");
    scanf("%d",&n);  

   switch(n)
   {
     case 1: traverse(); break;
     case 2: printf("\nEnter The No.: ");
             scanf("%d",&k);
             insert(k);
             break;
     case 3: del(); break;
     case 4: return 0;
     default: printf("\nWrong input\n");
   }
 
  } 
  
 return 0;
}


void traverse()
{
  int i;
  
  if(rear==-1)
   printf("\nQUEUE Is EMPTY..\n");
  else
   {
     printf("\nQUEUE Is: ");
     for(i=front;i<=rear;i++)
      printf("%d ",a[i]);
   printf("\n");
   }
}


void insert(int n)
{
  if(rear==10)
   printf("\nQUEUE Is Full\n");
  else
   {
     
     if(rear==-1)
      {
        rear++;
        front++;
      }
      else
       rear++;

     a[rear]=n;
   }
}

void del()
{
  if(front==-1)
  {
    printf("\nQUEUE Is EMPTY\n");
  }
  else
  {
    printf("\nDeleted Value: %d",a[front]);
    
    if(front==rear)
      front=rear=-1;
    else
      front++;
  }

}
