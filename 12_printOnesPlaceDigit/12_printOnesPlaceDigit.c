#include <stdio.h>

int main()
{
    int digit;
    printf("Enter The Digit: ");
    scanf("%d", &digit);

    printf("Unit Place: %d", digit % 10);

    return 0;
}