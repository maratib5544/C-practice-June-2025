#include <stdio.h>
int main()
{

    int age;
    char gender;

    printf("Enter your age :");
    scanf("%d", &age);
    printf("Enter your gender (M or F) :");
    scanf(" %c", &gender);

    if (age > 18)
    {
        if (gender == 'M')
        {
            printf("Eligible Male\n");
        }
        if (gender == 'F')
        {
            printf("Eligible Female\n");
        }
    }
    else
    {
        printf("Not eligible\n");
    }
    return 0;
}