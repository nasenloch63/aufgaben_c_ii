#include <stdio.h>

int main(void)
{
    char text[200];
    int laenge = 0;
    int links;
    int rechts;
    int istPalindrom = 1;

    printf("Text eingeben: ");
    fgets(text, sizeof(text), stdin);

    /* Länge des Textes selbst bestimmen */
    while (text[laenge] != '\0')
    {
        laenge++;
    }

    links = 0;
    rechts = laenge - 1;

    /* Text von außen nach innen prüfen */
    while (links < rechts)
    {
        /* Leerzeichen und Satzzeichen links überspringen */
        while (
            links < rechts &&
            (text[links] < 'a' || text[links] > 'z')
        )
        {
            links++;
        }

        /* Leerzeichen und Satzzeichen rechts überspringen */
        while (
            links < rechts &&
            (text[rechts] < 'a' || text[rechts] > 'z')
        )
        {
            rechts--;
        }

        /* Buchstaben vergleichen */
        if (text[links] != text[rechts])
        {
            istPalindrom = 0;
            break;
        }

        /* Beide Positionen zur Mitte bewegen */
        links++;
        rechts--;
    }

    if (istPalindrom == 1)
    {
        printf("Der Text ist ein Palindrom.\n");
    }
    else
    {
        printf("Der Text ist kein Palindrom.\n");
    }

    return 0;
}