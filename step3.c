#include <stdio.h>
int main()
{
    int age;
    char gender;     // M or F
    int cnic_status; // 1 = Yess and 0 = No

    printf("Enter your age :");
    scanf("%d", &age);

    printf("Enter your gender (M/F):");
    scanf(" %c", &gender);
    printf("Enter your cnic_status (1 for yes and 0 for no) :");
    scanf("%d", &cnic_status);
    if (age < 18)
    {
        printf("Underage entry not allowed\n");
    }
    else if (age >= 18 && gender == 'F' && cnic_status == 1)
    {
        printf("Female with CNIC.Entry allowed\n");
    }
    else if (age >= 18 && gender == 'M' && cnic_status == 1)
    {

        printf("Male with CNIC.Entry allowed\n");
    }

    else if (age >= 18 && cnic_status == 0)
    {

        printf("Entry denied.CNIC required\n");
    }
    else
    {
        printf("Invalid information\n");
    }

    return 0;
}