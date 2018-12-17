#include <stdio.h>
#define a 60
int main()
{
#define b 20
#define c 10
    int sum;
    sum = c + a;
    int mul;
    mul = sum * b;
    float div;
    div = mul / sum;
    printf("%d\n%d\n", b, a);
    printf("Addition:%d\n", sum);
    printf("Multiply:%d\n", mul);
    printf("Divide:%f\n", div);
    return 0;
}