#include <stdio.h>
int main(void)
{
    int zahlen[] = {2, 5, 2, 8, 5, 2, 4, 5, 4, 4, 4, 3, 2, 1, 2, 1, 1, 5, 2, 2, 3, 1, 2, 3, 9, 0, 1, 3};

    int laenge = sizeof(zahlen) / sizeof(zahlen[0]);

    int hauefigkeit[10] = {0};

    for (int i = 0; i < laenge; i++) {
        hauefigkeit[zahlen[i]]++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf(
            "Die Zahl %d kommt %d-mal vor. \n",
            i,
            hauefigkeit[i]);
    }
    return 0;
}