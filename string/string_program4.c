#include <stdio.h>
void shivam(int num)
{
    int i, j;
    char arr[100] = {'S', 'H', 'I', 'V', 'A', 'M', ' ', 'Y', 'A', 'D', 'A', 'V', ' ', 's', 'h', 'i', 'v', 'a', 'm', ' ', 'y', 'a', 'd', 'a', 'v'};
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 1; j++)
            printf("%c", arr[i]);
    }
    printf("\n");
}
int main()
{
    int input;
    scanf("%d", &input);
    shivam(input);
    return 0;
}