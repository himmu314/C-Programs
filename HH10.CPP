#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char coding(char);
char decoding(char);

char str[]={"mnkghdtabwvuprqczjxieyflos"};

void main()
{
 char ch[100];
 int i,k;
 clrscr();

 printf("\nEnter the sentense want to code it\n");
 gets(ch);
 fflush(stdin);

 k=strlen(ch);

 for(i=0;i<k;i++)
 ch[i]=coding(ch[i]);

 printf("\nThe Sentense after the codin is \n%s",ch);
 getch();

 printf("\n\nEnter the string For Decoding The sentnse\n");
 gets(ch);

 k=strlen(ch);

 for(i=0;i<k;i++)
 ch[i]=decoding(ch[i]);

 printf("\nThe Sentense  After the decoding is:\n%s",ch);

 getch();

}


char coding(char ch)
{
 if(ch>=97&&ch<=122)
 return (str[ch-97]);
 else
 return ch;
}

char decoding(char ch)
{
 int i;

 if(ch>=97&&ch<=122)
 {
  for(i=0;str[i]!=ch;i++);
  return (i+97);
 }

 else
 return ch;
}