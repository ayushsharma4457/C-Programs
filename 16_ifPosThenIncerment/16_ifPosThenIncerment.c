#include <stdio.h>

int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        num++;
        printf("%d", num);
    }

    return 0;
}