#include <stdio.h>

int main()
{

    int num1, age, cnic_status;
    char name[30];
    char gender;
    int total_entries = 0;
    int male_total = 0;
    int female_total = 0;
    int eligible_people = 0;
    int not_eligible_people = 0;

    printf("How many people are entering the system :");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {

        printf("Enter your name :");
        scanf(" %[^\n]", name);
        printf("Enter your age :");
        scanf("%d", &age);
        printf("Enter your CNIC status (1 = Yes and 0 = No) :");
        scanf("%d", &cnic_status);
        printf("Enter your gender (M or F) :");
        scanf(" %c", &gender);

        if (age >= 18 && cnic_status == 1 && gender == 'M')
        {
            printf("Eligible for voting.Proceed to Male Voter Line\n");
            male_total++;
        }
        else if (age >= 18 && cnic_status == 1 && gender == 'F')
        {
            printf("Eligible for voting.Proceed to Female Voter Line\n");
            female_total++;
        }

        else
        {
            printf("Not Eligible for voting\n");
            not_eligible_people++;
        }

        total_entries = num1;
        eligible_people = female_total + male_total;
    }

    printf("Total Entries = %d\n", num1);
    printf("Eligible People = %d\n", eligible_people);
    printf("Not Eligible People = %d\n", not_eligible_people);

    return 0;
}