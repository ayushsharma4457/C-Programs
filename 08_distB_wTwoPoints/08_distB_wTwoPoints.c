#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, dist;
    printf("Enter The X-Coordinate: ");
    scanf("%f%f", &x1, &x2);

    printf("Enter The Y-Coordinate: ");
    scanf("%f%f", &y1, &y2);

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance: %f", dist);

    return 0;
}