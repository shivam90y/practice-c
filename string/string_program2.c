#include <stdio.h>
int main()
{
    int i;
    char string[12] = {'H', 'E', 'L', 'L', 'O', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
    for (i = 0; i < 5; i++)
        printf("%s\n", string);
    return 0;
}