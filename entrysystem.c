#include <stdio.h>
int main()
{

    int age;
    int cnic_status;
    char gender;
    int allowed_entries = 0;
    int not_allowed_entries = 0;
    char sign = 'Y';

    while (sign == 'Y' || sign == 'y')
    {
        printf("Enter your age :");
        scanf("%d", &age);
        printf("Enter your CNIC status (1 = Yes and 0 = No) :");
        scanf("%d", &cnic_status);
        printf("Enter your gender (M or F) :");
        scanf(" %c", &gender);

        printf("Do you want to continue (Y or N):");
        scanf(" %c", &sign);
        if (age >= 18 && cnic_status == 1 && (gender == 'M' || gender == 'm'))
        {
            printf("Entry allowed\n");
            allowed_entries++;
        }
        else
        {
            printf("Entry not  allowed\n");
            not_allowed_entries++;
        }
    }
    printf("Allowed entries : %d\n", allowed_entries);
    printf("Not allowed entries : %d", not_allowed_entries);
    return 0;
}