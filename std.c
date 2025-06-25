#include <stdio.h>
int main () {
char name[20] ;
int rollnumber ;
float percentage ;
char grade ;

printf("Enter your name :");
scanf("%s", name);
printf("Enter your roll number  :");
scanf("%d",&rollnumber);
printf("Enter your percentage :");
   scanf("%f",&percentage);
   printf("Enter your grade :");
   scanf(" %c",&grade);

   printf("Your name is : %s \n",name);
 printf("Your roll number  is : %d \n",rollnumber);
  printf("Your percentage  is : %.2f% \n",percentage);
   printf("Your grade  is : %c \n",grade);
return 0;

}