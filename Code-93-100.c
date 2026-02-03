#include <stdio.h>

int calculateBonus(int years)
{
    int bonus;

    if (years >= 10)
        bonus = 15000;
    else if (years >= 7)
        bonus = 10000;
    else if (years >= 5)
        bonus = 7000;
    else if (years >= 3)
        bonus = 3000;
    else
        bonus = 1000;

    return bonus;
}

int main()
{
    int years, bonus;

    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("%d\n", bonus);

    return 0;
}
