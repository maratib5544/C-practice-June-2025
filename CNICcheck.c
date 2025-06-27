#include <stdio.h>
int main()
{
    int age;
    int CNIC_status;
    char gender;
    char grade;

    printf("Enter your age :");
    scanf("%d", &age);
    printf("Enter your CNIC status :");
    scanf("%d", &CNIC_status);
    printf("Enter your gender (M or F) :");
    scanf(" %c", &gender);
    printf("Enter your grade :");
    scanf(" %c", &grade);

    if (CNIC_status == 0)
    {
        printf("NO CNIC.Not eligible for any service\n");
        return 0;
    }
    if (age < 18)
    {
        printf("Underage citizen\n");
    }
    if (gender == 'M')
    {
        printf("Eligible Male for National ID and Voting\n");
    }
    if (gender == 'F')
    {
        printf("Eligible Female for National ID and Voting\n");
    }

    switch (grade)
    {
    case 'A':
        printf("Your performance : Excellent\n");
        break;
    case 'B':
        printf("Your performance : Very Good\n");
        break;
    case 'C':
        printf("Your performance : Good\n");
        break;
    case 'D':
        printf("Your performance : Satisfactory\n");
        break;
    case 'F':
        printf("Your performance : Fail\n");
        break;
    default:
        printf("Invalid Grade\n");
        break;
    }

    return 0;
}