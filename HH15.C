#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define N 1

struct train
{
 char name[20];
 char time[4];
}t[N];

void main()
{
 int i,f1,j;
 int k;
 clrscr();

 printf("\nEnter the %d No. of trains details\n",N);
 for(i=0;i<N;i++)
 {
  fflush(stdin);
  printf("\nEnter the name of %d Train: ",i+1);
  gets(t[i].name);
  printf("Enter The Time Of train Arrival(12 hour formate): ");
  fflush(stdin);
  gets(t[i].time);

  printf("\n%s\n",t[i].name);

 }

 printf("\nThe Details of Train is:-\n\nTRAIN NAME\t\tTIME OF ARRIVAL\n");
 for(i=0;i<N;i++)
 {
  f1=0;
  for(j=0;i<4;i++)
   if(t[i].time[j]=='P'||t[i].time[j]=='P')
    {
     f1=1;
     break;
     }
   else
   if(t[i].time[j]=='A'||t[i].time[j]=='a')
     break;

   if(j==1&&(t[i].time[0]>0&&t[i].time[0]<=9))
   k=t[i].time[0]-48;
   else
   if(j==2&&((t[i].time[1]>=0&&t[i].time[1]<=2)&&(t[i].time[0]==1)))
    k=(t[i].time[1]-48)+(t[i].time[0]-48);

   if(f1==1)
   k+=12;
   k=k%24;

   fflush(stdin);
   printf("%s\t\t\t%d.00\n",t[i].name,k);

 }

 getch();
}