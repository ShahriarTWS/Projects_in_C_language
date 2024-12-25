#include <stdio.h>
#include <unistd.h> // For sleep()
#include <stdlib.h>

int main()
{
    int h = 0, m = 0, s = 0;

    while (1)
    {
        // Clear the screen
        system("cls");

        // Increment seconds
        s++;

        // Time logic
        if (s == 60)
        {
            m++;
            s = 0;
        }

        if (m == 60)
        {
            h++;
            m = 0;
        }

        if (h == 24)
        {
            h = 0;
        }

        // Print time in HH:MM:SS format
        printf("%02d : %02d : %02d\n", h, m, s);

        // Wait for 1 second
        sleep(1);
    }

    return 0;
}
