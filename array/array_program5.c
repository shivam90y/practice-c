#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the size of array\n");
    scanf("%d", &n);
    int x[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }

    printf("Your array is:\n");
    for (i = 0; i < n; i++)

    {
        for (j = 0; j < n; j++)
        {
        printf("%d", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}