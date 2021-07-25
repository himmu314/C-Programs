//SJF CPU Scheduling

#include<stdio.h>

#define SIZE 5
int n;

void swap(int *a,int *b)
{ 
  int t;
  t=*a,*a=*b,*b=t;
}

void display(int ar[2][3]);
void display1(int ar[5][3]);


int main(void)
{
 int tp,ar[SIZE][3],i,j,b=0;
 
 printf("Enter The No. Of Process(MAX %d): ",SIZE);
 scanf("%d",&n);

 printf("\nPROCESS:\n");
 for(i=0;i<n;i++)
 {
   printf("\nP%d:-\n",i+1);
   printf("BT: ");
   scanf("%d",&ar[i][1]);
   ar[i][0]=i+1;
 }


 printf("Process:\n");
 display(ar);

 for(i=0;i<n;i++)
 {
   tp=i;
   for(j=i+1;j<n;j++)
    if(ar[tp][1]>ar[j][1])
      tp=j;

   
   if(i!=tp)
   {
     swap(&ar[i][1],&ar[tp][1]);
     swap(&ar[i][0],&ar[tp][0]);
   }

  if(i==0)
    ar[i][2]=ar[i][1];

   
  ar[i][2]=ar[i-1][2]+ar[i][1];

 }


 printf("\nAfter Applying SJF:\n");
 display1(ar); 

 return 0;
}


void display(int ar[5][3])
{
  int i;
  printf("Pr.\tBT\n");
 
  for(i=0;i<n;i++)
  printf("%d\t%d\n",ar[i][0],ar[i][1]);

}


void display1(int ar[5][3])
{
  int i,agwt=0;
  printf("Pr.\tBT\tAT\tCT\tTAT\tWT\n");
 
  for(i=0;i<n;i++)
  {
    agwt+=ar[i][2]-ar[i][1];
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",ar[i][0],ar[i][1],0,ar[i][2],ar[i][2],ar[i][2]-ar[i][1]);

  }

  printf("\nAverage WATING Time: %.2f\n\n",(float)agwt/n);
}

