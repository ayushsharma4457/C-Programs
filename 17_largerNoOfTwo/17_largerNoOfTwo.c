#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }

    else
    {
        printf("%d is greater than %d", num2, num1);
    }

    return 0;
}