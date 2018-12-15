#include <stdio.h>
void shivam(int num)
{
    int i, j, k, samp = 1;
    for (i = 1; i <= num; i++)
    {
        for (k = samp; k <= num; k++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        samp++;
        printf("\n");
    }
    samp = 1;
    for (i = num - 1; i >= 1; i--)
    {
        for (k = samp; k >= 0; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        samp++;
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