#include <stdio.h>
#include <string.h>
int main()
{

    int age;
    char gender;
    int cnic_status;
    char city[34];

    printf("Enter your age :");
    scanf("%d", &age);
    printf("Enter your gender (M or F) :");
    scanf(" %c", &gender);
    printf("Enter your CNIC status (1 for Yes and 0 for No):");
    scanf("%d", &cnic_status);
    printf("Enter your city (With first capital letter like 'Lahore') :");
    scanf("%s", city);

    if (age >= 18)
    {
        if (gender == 'M' || gender == 'F')
        {
            if (cnic_status == 1)
            {
                if (strcmp(city, "Karachi") == 0 || strcmp(city, "Lahore") == 0)
                {
                    printf("You are eligible for vote\n");
                }
                else
                {
                    printf("City must be Karachi or Lahore\n");
                }
            }
            else
            {
                printf("Invalid CNIC entered\n");
            }
        }
        else
        {
            printf("Invalid gender is entered\n");
        }
    }
    else
    {
        printf("You are under age\n");
    }

    return 0;
}