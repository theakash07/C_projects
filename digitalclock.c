#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//if you are on windows use <windows.h>

int main()
{
    int h, m, s;
    int d = 1000;
    printf("Set time:\n");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 12 || m > 59 || s > 59)
    {
        printf("Error!\n");
        exit(0);
    }

    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }

        printf("\nClock:");
        printf("\n%02d:%02d:%02d", h, m, s);

        usleep(d * 1000); // Delay in microseconds

        system("clear"); // Clear console screen
    }

    return 0;
}
