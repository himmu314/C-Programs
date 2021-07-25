#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 int i,j=-1,k,l1,l2,l3,m;
 char str[200],ch[]="Calcutta",g[20],gg[]="Kolkata";
 clrscr();

 printf("\nEnter the string containg the string \"Calcutta\"\n");
 gets(str);
 fflush(stdin);

 l1=strlen(str);
 l2=strlen(ch);

 for(i=0;i<l1;i=j)
 {
  j++;
  for(k=0;(str[j]!=' ')&&(j<l1);j++,k++)
  {
   if(str[j]=='.')
   break;

   g[k]=str[j];
  }
  g[k]='\0';

  l3=strlen(g);
  if((l2==l3)&&(!strcmp(g,ch)))
  {
    for(k=j-l2,m=0;gg[m]!='\0';k++,m++)
      str[k]=gg[m];

      j--;

    while(str[k]!='\0')
     {
       str[k]=str[k+1];
       k++;
     }

   }

 }

 printf("\nString after replacing 'Calcutta' with 'Kolkata' is:\n%s",str);
 getch();

}