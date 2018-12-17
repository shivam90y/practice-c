#include <stdio.h>
int main()
{
    int i, sum;
    int arr[10] = {1, 2, 3, 4, 5, 6, 3, 5, 9, 14};
    float average;
    sum = average = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    average = (float)sum / i;
    printf("Average of value%f\n", average);
    return 0;
}