#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
 int i,j=-1,k,l1,l2,l3,count=0;
 char str[100],ch[20],g[20];
 clrscr();

 printf("\nEnter the string \n");
 gets(str);

 fflush(stdin);

 printf("\nEnter the word: ");
 scanf("%s",ch);

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

  if(l2==l3)
   count=count+!(strcmp(ch,g));

 }

 printf("\nOccurrence of The given word is %d",count);

 getch();

}