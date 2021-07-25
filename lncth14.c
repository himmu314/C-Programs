//Round Robin Program.............

#include<stdio.h>


int q[50],head,rear;
void addq(int n)
{ 
  if(rear==-1)
  {
   head=rear=0;
   q[rear]=n;
  }
  else
  {
    rear++;
    q[rear]=n;
  } 
}

int delq()
{
  int n;

  if(head==rear)
   {
     n=q[head];
     head=rear=-1;
   }
  else
   {
     n=q[head];
     head++;
   }

 
   return n;
}

int isempty()
{
  if(head==-1)
   return 0;
  else 
   return 1;
}


void display(int ar[10][3],int n)
{
  int i;
  printf("\nRound Robin:-\n");
  printf("PID\tBT\tCT\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%d\t%d\n",i+1,ar[i][1],ar[i][2]);
  }

}


int main()
{
  int ar[10][3],tq,n,i,j,b=0;
  int tp[10];
  head=rear=-1;
  
  printf("Enter The No Of Process: ");
  scanf("%d",&n);
  printf("Enter Time Quantum: ");
  scanf("%d",&tq);

  printf("Enter %d Processes:-\n",n);
  for(i=0;i<n;i++)
  {
   printf("P%d:-\n",i+1);
   printf("BT: ");
   scanf("%d",&ar[i][1]);
   ar[i][0]=i+1;
   tp[i]=ar[i][1];

   addq(i);
  }

 
while(isempty()) 
{

   j=delq();
    if(tp[j]>tq)
     {
       b+=tq;
       tp[j]-=tq;
       addq(j);
     }
     else
     {
        if(tp[j]==tq)
          b+=tq,tp[j]=0,ar[j][2]=b;
        else
         b+=tp[j],tp[j]=0,ar[j][2]=b;   
     }
   
}
  
display(ar,n);

 return 0;
}
