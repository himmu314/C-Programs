#include<stdio.h>

int main(void)
{
 int i,j,n;

 printf("\nEnter The No.: ");
 scanf("%d",&n);
 printf("\n");
 
 for(i=1;i<=n;i++)
 {
	for(j=1;j<=n+i-1;j++)
		if(j<=n-i)
			printf(" ");
		else
			printf("*");

	printf("\n");
		
  }		
}
