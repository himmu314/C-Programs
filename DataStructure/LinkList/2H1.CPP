#include<stdio.h>
#include<conio.h>

void del();
void ins();
void show();

int a[10],n=0;//f=0;

void main()
{
 int t;
 clrscr();

 while(1)
 {
  printf("\nChoose The OPtion\n1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
  scanf("%d",&t);

  switch(t)
  {
   case 1: ins(); break;
   case 2: del(); break;
   case 3: show(); break;
   case 4: return;
   default : printf("\nYou have entered the wrong value\n");
  }

 }

}

void ins()
{
 int l,i,temp;

 if(n==10)
 {
   printf("\nArray Is Full\n");
   getch();
   return;
 }

 printf("\nEnter the location b/w 1 to %d : ",n+1);
 scanf("%d",&l);

 if((l>=1)&&(l<=n+1))
 {
 // f=1;
  printf("\nEnter the number\n");
  scanf("%d",&temp);

  for(i=n;i>=l;i--)
   a[i]=a[i-1];

  a[i]=temp;
  n++;
 }
 else
 printf("\nYou enter the wrong value\n");

}

void del()
{
 int t,loc,i,j,temp;

 if(n==0)
 {
  printf("\nArray Is Already Empty\n");
  getch();
  return;
 }

 printf("Choose The option of DEletion\n1. Location\n2. Enter the Number\n");
 scanf("%d",&t);

 if(t==1)
 {
  printf("\nEnter the location b/w 1 to %d : ",n);
  scanf("%d",&loc);

  if((loc>=1)&&(loc<=n))
  {
   for(i=loc-1;i<n;i++)
    a[i]=a[i+1];

   if(n==1)
   {
   // f=0;
    n--;
   }
   else
    n--;
  }
  else
   printf("\nYou have enter the wrong location\n");

 }
 else
 if(t==2)
 {
  printf("\nEnter the no.\n");
  scanf("%d",&temp);

  for(i=0;i<n;i++)
   if(a[i]==temp)
   {
    for(j=i;j<n;j++)
     a[j]=a[j+1];
    break;
   }

  if(i==n)
  {
   printf("\nNumber not found\n");
    getch();
    return;
  }

  if(n==1)
   {
   // f=0;
    n--;
   }
  else
   n--;

 }
 else
  printf("\nYou have entered the wrong value\n");

 getch();
}

void show()
{
  int i;

 if(n==0)
   printf("\nArray Is empty\n");
 else
 {
  printf("\nArray Is:-\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }

 getch();
}
