#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, num, guess, tries = 0;
    printf("A = ");
    scanf("%d", &a);

    printf("B = ");
    scanf("%d", &b);

    srand(time(NULL));
    num = (rand() % (b - a + 1)) + a;

    printf("Guess the number between %d and %d (10 tries):\n", a, b);

    while (tries++ < 10)
    {
        printf("Guess: ");
        scanf("%d", &guess);
        if (guess == num)
        {
            printf("Congratulations! You guessed the number!\nScore: %d\n", 10 - tries + 1);
            return 0;
        }
        printf(guess > num ? "High\n" : "Low\n");
    }

    printf("Sorry, you ran out of tries. The number was %d.\n", num);
    return 0;
}
