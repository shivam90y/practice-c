#include <stdio.h>

union item {
    int a;
    float b;
    char ch;
};

int main()
{
    union item it;
    it.a = 12;
    printf("%d\n", it.a);
    it.b = 20.2;
    printf("%f\n", it.b);
    it.ch = 'z';
    printf("%c\n", it.ch);

    return 0;
}