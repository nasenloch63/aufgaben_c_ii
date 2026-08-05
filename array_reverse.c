#include <stdio.h>
int main(void) {
    int array[] = {4, 8, 15, 12};
    
    int laenge = sizeof(array) / sizeof(array[0]);
    int umgekehrt[laenge];

    for (int i = 0; i < laenge; i++)
    {
        umgekehrt[i] = array[laenge - 1 - i];
    }

    for (int i = 0; i < laenge; i++)
    {
        printf("%d ", umgekehrt[i]);
    }
    
return 0;
}
