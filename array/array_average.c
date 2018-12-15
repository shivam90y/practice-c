#include <stdio.h>
int main()
{
    int i, sum;
    int arr[10] = {1, 2, 3, 4, 5, 6,13,14,36,13};
    float average;
    sum = average = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    average = (float)sum / i;
    printf("Average of array%.3f\n", average);
    return 0;
}