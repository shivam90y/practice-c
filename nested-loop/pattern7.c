#include <stdio.h>
void shivam(int k)
{
    int i, j;
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    for (i = k - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
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