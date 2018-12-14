#include <stdio.h>
int main()
{
    int i, j, no = 1, len;
    printf("Enter number of rows: ");
    scanf("%d", &len);
    for (i = 1; i <= len; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf(" %d", no);
            no++;
        }
    }
    return 0;
}