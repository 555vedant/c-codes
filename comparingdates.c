#include <stdio.h>

struct dates
{
    int day;
    int month;
    int year;
};

int cmp(struct dates cmp1, struct dates cmp2)
{
    if (cmp1.day == cmp2.day && cmp1.month == cmp2.month && cmp1.year == cmp2.year)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct dates cmp1, cmp2;

    printf("Enter the day of date in _ _ ");
    scanf("%d", &cmp1.day);
    printf("Enter the month of date in _ _ ");
    scanf("%d", &cmp1.month);
    printf("Enter the year of date in _ _ ");
    scanf("%d", &cmp1.year);

    printf("Enter the day of date in _ _ ");
    scanf("%d", &cmp2.day);
    printf("Enter the month of date in _ _ ");
    scanf("%d", &cmp2.month);
    printf("Enter the year of date in _ _ ");
    scanf("%d", &cmp2.year);

    if (cmp(cmp1, cmp2))
    {
        printf("The dates are equal.\n");
    }
    else
    {
        printf("The dates are not equal.\n");
    }

    return 0;
}
