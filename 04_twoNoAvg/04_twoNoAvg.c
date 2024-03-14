#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter The Number 1: ");
    scanf("%f", &a);

    printf("Enter The Number 2: ");
    scanf("%f", &b);

    printf("Average Of Two Numbers: %f", (a + b) / 2);
    return 0;
}