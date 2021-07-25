#include<stdio.h>

void display(int a[5][5],int,int);
void insert(int a[5][5],int,int);

int main()
{
  int r1,r2,c1,c2,i,j,k;
  int a1[5][5],a2[5][5],a3[5][5];

  printf("\nEnter The SIZE Of 1st Array:\n");
  scanf("%d%d",&r1,&c1);
  
  printf("\nEnter The SIZE Of 2nd Array:\n");
  scanf("%d%d",&r2,&c2);

  if(c1!=r2)
   {
     printf("\nMultiplication Is NOT POSSIBLE\n");
     return 0;
   }

   printf("\nEnter The Elements Of 1st Array:(%dx%d)\n",r1,c1);
   insert(a1,r1,c1);

   printf("\nEnter The Elements Of 1st Array:(%dx%d)\n",r2,c2);
   insert(a2,r2,c2);

   printf("\n\n1st ARRAY:\n");
   display(a1,r1,c1);
 
   printf("\n1st ARRAY:\n");
   display(a1,r1,c1);

  
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
     {
       a3[i][j]=0;
       for(k=0;k<c1;k++)
        a3[i][j]+=a1[i][k]*a2[k][j];
     }
   } 

   printf("\nMULTIPLICATION:\n");
   display(a3,r1,c2);

  return 0;
}

void display(int a[5][5],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
     printf("%3d ",a[i][j]);
   printf("\n");
  }
}


void insert(int a[5][5],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
  }
}
