#include <stdio.h>
int main (void) {
    int matrix [4][4] = {
        { 2,  3,  5,  7},
        {11, 13, 17, 19},
        {23, 29, 31, 37},
        {41, 43, 47, 53}
    }; 
    for (int zeile = 0; zeile < 4; zeile++)
    {
        int summe = 0;

        for (int spalte = 0; spalte < 4; spalte++)
        {
            summe += matrix[zeile][spalte];
        }
        printf("Summe der Zeile %d: %d\n", zeile, summe);

    }
return 0;
}