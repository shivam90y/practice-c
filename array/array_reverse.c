#include <stdio.h>
int main()
{
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (i = 9; i >= 0; i--)
        printf("%d", arr[i]);
        printf("\n");
    return 0;
}