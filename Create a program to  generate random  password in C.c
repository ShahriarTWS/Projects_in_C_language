#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter Password length (at least 6): ");
    scanf("%d", &n);

    if (n < 6)
    {
        printf("Password length must be at least 6.\n");
        return 0;
    }

    char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

    char str[n + 1];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int temp = rand() % 72;
        str[i] = ch[temp];
    }

    str[n] = '\0';

    printf("Password is : %s\n", str);

    return 0;
}
/*
Enter Password length (at least 6): 8
Password is : @t$3m5Ww
*/
