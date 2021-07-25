#include<stdio.h>

void display(char a[3][3]);
int valid(char a[3][3],int n);
int check(char a[3][3]);
void insert(char a[3][3],int,int);

void main()
{
 int i,j,k=1,n;
 char a[3][3]={'1','2','3','4','5','6','7','8','9'};
 char n1[30],n2[30];

 /* for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    a[i][j]='*'; */
 
 printf("Enter The Name(1st Player): ");
 scanf("%s",n1);
 printf("Enter The Name(2nd Player): ");
 scanf("%s",n2);

 printf("\n1st Player Symbol is: X\n2nd Player Symbol is: 0\n");
 while(k<=9)
 {

  X:
    
   display(a);
 
  if(k%2!=0)
   printf("%s, Enter The Position: ",n1);
  else
   printf("%s, Enter The Position: ",n2);

   scanf(" %d",&n);
   
  if(valid(a,n))
   {
     printf("Incorrect Position\nPlease Enter The Correct Position");
     goto X;
   }  
  
insert(a,n,k);

    if(check(a))
    {

      display(a);
      if(k%2!=0)
       printf("%s, WINS...\n",n1);
      else
       printf("%s, WINS...\n",n2);
     
      return;
    }
  
    
   k++;
   
  }
  
  printf("\nMATCH DRAW\n");
}



void display(char a[3][3])
{
  int i,j;

   printf("\n\n"); 
  
   for(i=0;i<3;i++)
   { 
     
     for(j=0;j<3;j++)
      printf(" %c |",a[i][j]);
     
     if(i<2)
     printf("\n--------------\n");
   }
  printf("\n\n");
}


int valid(char a[3][3],int n)
{
  int i,j,k=0;
  
  if(n>9 || n<1)
   return 1;

  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   {
     k++;
     if(k==n)
      goto C;
   }
 
  C:
  if(a[i][j]=='X' || a[i][j]=='0')
   return 1;

  return 0;
}



int check(char a[3][3])
{
  int i;
  
  for(i=0;i<3;i++)
   if(a[0][i]==a[1][i] && a[1][i]==a[2][i])
    return 1;
 
  for(i=0;i<3;i++)
   if(a[i][0]==a[i][1] && a[i][1]==a[i][2])
    return 1;

  if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
   return 1;


  if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
   return 1;
   
 return 0;
}


void insert(char a[3][3],int n,int k)
{
  int i,j,y=0; 

 for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   {
     y++;
     if(y==n)
      goto C;
   }
 
  C:
  if(k%2!=0)
   a[i][j]='X';
  else
   a[i][j]='0';

}
