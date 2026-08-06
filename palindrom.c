#include <stdio.h>
int main(void) {
    char text[200];
    printf("Text eingeben: ");
    fgets(text, sizeof(text), stdin);
    int laenge = 0;
    while (text[laenge] != "\0")
    {
        laenge++;
    }
return 0;
}