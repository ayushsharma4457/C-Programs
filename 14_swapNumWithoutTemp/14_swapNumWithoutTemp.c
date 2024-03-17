#include <stdio.h>

int main()
{
    int num1, num2;
    printf("ENter First Number: ");
    scanf("%d", &num1);
    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    printf("Before Swap: %d %d", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter Swap: %d %d", num1, num2);

    return 0;
}