#include<stdio.h>
#include<string.h>

int main(void)
{
 
 char course[30],session[10],sem[4],sec;


 printf("Enter Course Name: ");
 scanf("%s",course);
 printf("Enter Session(yyyy-yy): ");
 scanf("%s",session);
 printf("Enter Semester(I,II,III..): ");
 scanf("%s",sem);
 fflush(stdin);
 printf("Enter Section(A/B/C..): ");
 scanf(" %c",&sec);



  printf("\n\t\t\tLNCT - %s. Bhopal\n",course);
  printf("\t\tTime Table\t\t Session: %s\n",session);

  printf("MCA - %s Sem. (Section - %c)\n",sem,sec);

  return 0;

}
