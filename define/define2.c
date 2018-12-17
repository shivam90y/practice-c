#include <stdio.h>
#define shiv 40
#define ram 60
#define seth 70
int main()
{
    int value = 60;
    int shyam = 90;
    int sum;
    sum = value + shyam;
    float div;
    div = sum / shiv;
    int mul;
    mul = shyam * seth;
    printf("%d\n", shiv);
    printf("%d\n", ram);
    printf("%d\n", seth);
    printf("%d\n", value);
    printf("%d\n", shyam);
    printf("sum of value and shyam:%d\nmul of shyam and seth :%d\n", sum, mul);
    printf("Divide sum and shiv:%f\n", div);
    return 0;
}
