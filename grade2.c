#include <stdio.h>
int main () {
float percentage;
printf("Enter your percentage : ");
scanf("%f",&percentage);

if(percentage>100 || percentage<0){
printf("Your percentage is invalid");
}
else if (percentage>=90){
printf("Grade = A+");
}
else if (percentage>=80){
printf("Grade = A");
}
else if (percentage>=70){
    printf("Grade = B");
    }
    else if (percentage>=60)
    {
    printf("Grade = C");
    }
    else  
    {
    printf("Grade = F");
    }
    
   
return 0;

}