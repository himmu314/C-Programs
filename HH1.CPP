#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void del(char str[],char);

void main()
{
 char str[30],ch;
 clrscr();

 printf("\nEnter the string \n");
 gets(str);

 printf("\nEnter the character you want to delete for the given String\n");
 scanf("%c",&ch);


 del(str,ch);

 printf("\nString After removing the %c Character: %s\n",ch,str);

 getch();
}

void del(char str[],char ch)
{
  int i=0,j=0;
  char st[40];
  strcpy(st,str);

  while(st[i]!='\0')
  {
     if(st[i]!=ch)
     str[j++]=st[i];
     i++;
  }
  str[j]='\0';

}