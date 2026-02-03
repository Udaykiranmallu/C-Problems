#include <stdio.h>

float calculateTax(float salary)
{
    float tax = 0;

    if (salary <= 250000)
    {
        tax = 0;
    }
    else if (salary <= 500000)
    {
        tax = salary * 0.05;
    }
    else if (salary <= 1000000)
    {
        tax = salary * 0.20;
    }
    else
    {
        tax = salary * 0.30;
    }

    return tax;
}

int main()
{
    float salary, tax;
    scanf("%f",&salary);

    tax = calculateTax(salary);
    printf("%.2f",tax);

    return 0;
}
