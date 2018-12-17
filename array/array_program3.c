#include <stdio.h>
int main()
{
    int i, j;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (j = 0; j < 10; j++)

    {
        printf("Element%d=%d\n", j, arr[j]);
    }
    return 0;
}
