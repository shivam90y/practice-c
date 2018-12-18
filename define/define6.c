#include <stdio.h>
#define PI 3.14

int main()
{
    int radius;
    float area;
    float sum;

    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("Area=%f\n", area);
    sum = area + radius;
    printf("Sum=%.3ff\n", sum);
    return 0;
}