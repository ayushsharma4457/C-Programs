#include <stdio.h>

int main()
{
    int num;
    printf("Enter The First Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Postive", num);
    }

    else if (num < 0)
    {
        printf("%d is Negative", num);
    }
    else
    {
        printf("%d is zero", num);
    }

    return 0;
}