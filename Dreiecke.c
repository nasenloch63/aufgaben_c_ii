#include <stdio.h>

int main(void)
{
    for (int zeile = 1; zeile <= 5; zeile++)
    {
        for (int spalte = 1; spalte <= zeile; spalte++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}