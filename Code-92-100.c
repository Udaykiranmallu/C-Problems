#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;   // Not prime

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;   // Not prime
    }
    return 1;   // Prime
}

int main()
{
    int num;
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
