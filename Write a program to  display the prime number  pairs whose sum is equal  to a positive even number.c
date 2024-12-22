#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter an even number greater than 2: ");
    scanf("%d", &n);

    if (n <= 2 || n % 2 != 0)
    {
        printf("Number must be even and greater than 2.\n");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            printf("%d  %d\n", i, n - i);
        }
    }

    return 0;
}
/*
Enter an even number greater than 2: 24
5  19
7  17
11  13
*/
