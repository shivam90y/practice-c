#include <stdio.h>
int main()
{
    int i, j;
    char arr[12] = {'s', 'h', 'i', 'v', 'a', 'm', ' ', 'y', 'a', 'd', 'a', 'v'};
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 1; j++)
            printf("%c", arr[i]);
    }
    return 0;
}