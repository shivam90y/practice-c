#include <stdio.h>
void shiv(int num)
{
    int i, j, k = 1;
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        k = k + 1;
    }
}
int main()
{
    int input;
    scanf("%d", &input);
    shiv(input);
    return 0;