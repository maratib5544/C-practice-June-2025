#include <stdio.h>
int main () {

float price ;
float quantity ;
float mobcover = 499.99;
printf("Enter the quantity :");
scanf("%f", &quantity);
printf("Total price = %.2f ", quantity*mobcover);
   
return 0;

}