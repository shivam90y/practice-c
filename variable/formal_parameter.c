#include <stdio.h>
int sum(int a, int b)
{
    a=30;
    printf("value of a in sum()=%d\n", a);
    printf("value of b in sum()=%d\n", b);
    return a + b;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    int c = 0;
    printf("value of a in main()=%d\n", a);
    c = sum(a, b);
    printf("value of c in main()=%d\n", c);
    return 0;
}
