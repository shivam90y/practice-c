#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i;
    int sum = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // for (i = 0; str[i] != '\0'; i++)
        // sum = sum + str[i];
    printf("Length of string: %ld\n", strlen(str));
    return 0;
}