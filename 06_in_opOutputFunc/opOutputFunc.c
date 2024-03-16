#include <stdio.h>
#include <string.h>

int main()
{
    char c, ch;
    char name[50];
    printf("Enter The CHar: ");
    c = getchar();
    putchar(c);

    printf("\nEnter any character:\n ");

    ch = getch();

    printf("\nEntered character is: ");

    putch(ch);

    printf("\nEnter your text: ");
    gets(name);

    printf("\nYour text is: ");

    puts(name);
    return 0;
}