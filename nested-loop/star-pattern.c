#include <stdio.h>
void shivam(int k)
{
    int i, j;
    for (i = 1; i <= k; i++)
    {
        for (int p = k - i; p > 0; p--)
        {
            printf("\t");
        }
        for (j = 1; j <= i; j++)
        {
            printf("\t*\t");
        }
        printf("\n");
    }
    for (i = 1; i <= k; i++)
    {
        for (int p = 1; p <= i; p++)
        {
            printf("\t");
        }
        for (j = k - 1; j >= i; j--)
        {
            printf("\t*\t");
        }
        printf("\n");
    }
}
int main()
{
    int input;
    scanf("%d", &input);
    shivam(input);

    return 0;
}