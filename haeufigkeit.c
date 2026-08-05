#include <stdio.h>
int main (void) 
{
    int zahlen[] = {2, 5, 2, 8, 5, 2, 0, 8, 9};

    int laenge = sizeof(zahlen) / sizeof(zahlen[0]);

    int hauefigkeit[10] = {0};

    for(int i = 0; i < 10; i++)
    { 
        hauefigkeit[zahlen[i]]++;  
    }
    for (int i = 0; i < 10; i++)
    { 
        printf(
            "Die Zahl %d kommt %d-mal vor. \n",
            i,
            hauefigkeit[i]
        );
    }
    return 0;
}