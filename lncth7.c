//Program To REVERSE A Number

#include<stdio.h>

 void dis(int a[])
{
  int i;
  for(i=0;i<10;i++)
    printf("%d ",a[i]);

}

int main(void)
{
 int ar[10],i,j,temp;
 
 printf("Enter The 10 NO.:\n");
 for(i=0;i<10;i++)
  scanf("%d",&ar[i]);

 printf("\nYour Array Is:\n");
 dis(ar);

 for(i=0,j=9;i<j;i++,j--)
  temp=ar[i],ar[i]=ar[j],ar[j]=temp;

 printf("\nReverse Array:\n");
  dis(ar);
 
 return 0;
}
