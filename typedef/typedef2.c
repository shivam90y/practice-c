#include <stdio.h>
#include <string.h>
typedef struct Cow
{
    int feet;
    int tail;
    char name[10];
    int ears;
    int eyes;
    int mouth;
    int nose;
} Cow;
int main()
{
    Cow inform;
    inform.feet = 2;
    inform.tail = 1;
    strcpy(inform.name, "Gauri");
    inform.ears = 2;
    inform.eyes = 2;
    inform.mouth = 1;
    inform.nose = 1;
    printf("inform.foot:%d\n", inform.feet);
    printf("inform.tail:%d\n", inform.tail);
    printf("inform.name:%s\n", inform.name);
    printf("inform.ears:%d\n", inform.ears);
    printf("inform.eyes:%d\n", inform.eyes);
    printf("inform.mouth:%d\n", inform.mouth);
    printf("inform.nose:%d\n", inform.nose);
    return 0;
}