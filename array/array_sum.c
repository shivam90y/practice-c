#include <stdio.h>
int main()
{
    int i, j;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    j = 0;
    for (i = 9; i >= 0; i--)
    {
        j = j + arr[i];
    }
    printf("sum of array is %d", arr[i]);
    return 0;
}