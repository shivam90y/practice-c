#include <stdio.h>
void shivam()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
    }
    int main()
    {
        int input;
        scanf("%d", &input);
        shivam(input);
    }
    return 0;
}