// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    FILE *fp;
    int ch;
    char ch1;
    
    fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
     printf("Unalbe To Open FILE\n");
     return 1;
    }
    
    printf("Enter The TEXT:\n");
    while((ch=getchar())!=EOF)
     fputc(ch,fp);
     
     fclose(fp);
     
     fp=fopen("file1.txt","r");
     
     while((ch1=fgetc(fp))!=EOF)
      printf("%c",ch1);
      
      fclose(fp);
    
    return 0;
}
