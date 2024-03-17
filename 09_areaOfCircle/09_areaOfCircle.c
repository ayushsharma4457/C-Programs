#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    float radius, area;

    printf("ENter The Radius: ");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);

    printf("Area: %f", area);

    return 0;
}