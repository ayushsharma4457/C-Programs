#include <stdio.h>
#include <math.h>

int main()
{
    int S, a, b, c, area;
    printf("ENter The Three Side OF Triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    S = (a + b + c) / 2;
    area = sqrt(S * (S - a) * (S - b) * (S - c));

    printf("Area: %d", area);

    return 0;
}