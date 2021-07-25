#include<stdio.h>
#include<conio.h>

#define r 4
#define c 3

void main()
{
 int a[r][c], i,j,k,l,m,n,t,temp;
 clrscr();

 printf("\nEnter the %d No of Elements(%d per row)\n",r*c,c);
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   m=i;
   n=j;
   t=j+1;
   for(k=i;k<r;k++,t=0)
    for(l=0+t;l<c;l++)
     if(a[m][n]>a[k][l])
      {
       m=k;
       n=l;
      }

    if(m!=i||n!=j)
    {
     temp=a[m][n];
     a[m][n]=a[i][j];
     a[i][j]=temp;
    }
  }
 }

 printf("\nArray After Sorting is:\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   printf("%d ",a[i][j]);

  printf("\n");
 }

 getch();
}