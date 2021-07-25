#include<stdio.h>


#define SIZE 10

int a[SIZE],front,rear;

void insert(int);
void del();
void traverse();
void queue();


int main()
{
  
  
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











