#include <stdio.h>

int main()
{
    int initial, final;

    printf("Initial: ");
    scanf("%d", &initial);
    printf("Final: ");
    scanf("%d", &final);

    for (int i = initial; i <= final; i++)
    {
        for (int j = i; j <= final; j++)
        {
            for (int k = j; k <= final; k++)
            {
                if (i * i + j * j == k * k)
                {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
/*
Initial: 5
Final: 20
5, 12, 13
6, 8, 10
8, 15, 17
9, 12, 15
12, 16, 20
*/
