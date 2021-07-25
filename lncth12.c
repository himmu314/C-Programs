#include<stdio.h>

int main()
{
  FILE *fp;
  int ch;

  fp=fopen("try.txt","w");
  printf("Enter The Text: \n");
  
  while((ch=getchar())!=EOF)
    fputc(ch,fp);

  fclose(fp);

 fp=fopen("try.txt","r");
  while((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
 
 fclose(fp);
  return 0;
}
