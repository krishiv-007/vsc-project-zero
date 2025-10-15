#include <stdio.h>

int main()
{
    printf("MENU\n0)sunday\n1)monday\n2)tuesday\n3)wednesday\n4)thursday\n5)friday\n6)saturday\n");
    printf("Enter the start day: ");
    int startday;
    scanf("%d", &startday);

    printf("Enter the number of days in that month: ");
    int days;
    scanf("%d", &days);

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");
    printf("--- --- --- --- --- --- ---\n");

    int count = 0;

    // Print leading spaces for the first week
    for (count = 0; count < startday; count++)
    {
        printf("    ");
    }

    // Print all days
    for (int daycount = 1; daycount <= days; daycount++)
    {
        printf("%3d ", daycount);
        count++;

        if (count > 6)
        {
            printf("\n");
            count = 0;
        }
    }

    printf("\n--- --- --- --- --- --- ---\n");

    return 0;
}
