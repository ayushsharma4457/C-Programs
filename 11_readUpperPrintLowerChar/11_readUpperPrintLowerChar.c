#include <stdio.h>

int main()
{
    char character;

    printf("ENter The Upper Character: ");
    scanf("%c", &character);

    printf("Lower Character: %c", character + 32);

    return 0;
}