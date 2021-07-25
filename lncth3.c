//Convet Decimal TO ROMAN NUMBER

#include<stdio.h>

void roman(int n);
void display(int);

int main()
{
  int n;
  
  printf("Enter THe No. In DECIMAL: ");
  scanf("%d",&n);

  printf("The Roman No.: \n");
  roman(n);

 printf("\n\n");
 return 0;
}



void roman(int n)
{
  
 int k;

 if(n>100)
  {
    k=n/100;
    while(k--)
     {
      display(100);
      n=n-100;
     }      
  }

  if(n<100 && n>=50)
  {
      display(50);
      n=n-50;      
  }
 
  if(n>=10)
   {
     k=n/10;
     while(k--)
     {
       display(10);
        n=n-10;
     }
   }


  if(n==9)
   {
     display(9);
     return;
   }


  if(n>=5)
   {
     display(5);
     n=n-5;
   }

  if(n==4)
   {
    display(4);
    return;
   }

  if(n>0)
  {
    while(n--)
     display(1);
  }


}


void display(int n)
{
  switch(n)
  {
    case 1: printf("I"); break;
    case 4: printf("IV"); break;
    case 5: printf("V"); break;
    case 9: printf("IX"); break;
    case 10: printf("X"); break;
    case 50: printf("L"); break;
    case 100: printf("C"); break;
    
    default: printf("Wrong Input\n");
  }

}
