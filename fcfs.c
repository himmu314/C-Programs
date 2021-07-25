#include<stdio.h>

void display(int a[10][4],int);
void display1(int a[10][4],int);
void swap(int *a,int *b);


int main()
{
  int n,i,j,temp,k;
  int p[10][4],b=0;

  printf("Enter The No. Of Processes(MAX 10): ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
   {
     printf("\nPROCESS P%d:-",i+1);
     printf("\nEnter Arrival Time: ");
     scanf("%d",&p[i][0]);
     printf("Enter Burst Time: ");
     scanf("%d",&p[i][1]);
     p[i][2]=i+1;
   }


 display(p,n);
  
  printf("\n\nFCFS:- \n"); 
  
 for(i=0;i<n;i++)
  {
    temp=i;
    for(j=i+1;j<n;j++)
    {
      if(p[temp][0]>p[j][0])
        temp=j;
    }
    
    if(i!=temp)
   {
     

    swap(&p[temp][0],&p[i][0]);
    swap(&p[temp][1],&p[i][1]);
    swap(&p[temp][2],&p[i][2]);
     
   }

    if(i==0)
      b=p[0][0];
     
     if(p[i][0]>b)
     {
       k=p[i][0]-b;
       b=b+k;
     }
     

     b=b+p[i][1];   
     p[i][3]=b;



  }  

  p[n-1][3]=b+p[n-1][1];
  display1(p,n);  

  printf("\n");
  for(i=0;i<n;i++)
   printf("P%d  ",p[i][2]);

  printf("\n\n");

  return 0;
}


void display(int a[10][4],int n)
{
  int i;
   
  printf("Pr  AT  BT\n");
  for(i=0;i<n;i++)
  {
    printf("P%d  %d  %d\n",a[i][2],a[i][0],a[i][1]);
  }

}


void display1(int a[10][4],int n)
{
  int i,t,w,avgw=0;
   
  printf("Pr\tAT\tBT\tCT\tTAT\tWT\n");
  for(i=0;i<n;i++)
  {
    t=a[i][3]-a[i][0];
    w=t-a[i][1];
    avgw=avgw+w;
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n",a[i][2],a[i][0],a[i][1],a[i][3],t,w);
  }

  printf("Average Waiting Time: %.2f\n",(float)avgw/n);

}



void swap(int *a,int *b)
{
 int t;
  
  t=*a;
  *a=*b;
  *b=t;

}
