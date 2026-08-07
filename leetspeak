#include <stdio.h>

int main(void)
{
    char text[200];

    printf("Text eingeben: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        switch (text[i])
        {
            case 'a':
                printf("4");
                break;

            case 'b':
                printf("8");
                break;

            case 'e':
                printf("3");
                break;

            case 'f':
                printf("ph");
                break;

            case 'g':
                printf("9");
                break;

            case 'i':
                printf("!");
                break;

            case 'l':
                printf("1");
                break;

            case 's':
                printf("5");
                break;

            case 't':
                printf("7");
                break;

            case 'r':
                printf("2");
                break;

            default:
                printf("%c", text[i]);
        }
    }

    return 0;
}