#include<stdio.h>

int main()
{
 int a,b,r,n;

  printf("Enter 2 No.: \n");
  scanf("%d%d",&a,&b);

  n=a*b;

 while(a%b!=0)
 {
   r=a%b;
   a=b;
   b=r;
 }

printf("\nHCF: %d",b);
printf("\nLCM: %d\n\n",n/b);


 return 0;
}
