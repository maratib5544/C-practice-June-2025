#include <stdio.h>
int main()
{
    int num[5];
    int max;
    int scndmax;
    max = num[0];
    scndmax = -1;
    printf("Enter you five number :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        if (num[i] > max)
        {
            scndmax = max;
            max = num[i];
        }
        if (num[i] > scndmax && num[i] != max)
        {
            scndmax = num[i];
        }
    }
    printf("Max number = %d\n", max);
    printf("Second Max number = %d\n", scndmax);
    return 0;
}