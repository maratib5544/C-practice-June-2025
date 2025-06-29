

#include <stdio.h>

int main()
{
    int number;
    int number2;
    int even_count = 0;
    int odd_count = 0;

    printf("How many number want you enter :");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("Enter a number %d :", i);
        scanf("%d", &number2);
        if (number2 % 2 == 0)
        {

            printf("Even\n");
            even_count++;
        }
        else
        {
            printf("Odd\n");
            odd_count++;
        }
    }
    printf("Total Even number :%d\n", even_count);
    printf("Total Odd number :%d\n", odd_count);

    return 0;
}