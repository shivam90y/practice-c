#include <stdio.h>
void shivam(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)

        {
            if (i == j)
                printf("%d", 2);
            else
                printf("%d", 0);
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
