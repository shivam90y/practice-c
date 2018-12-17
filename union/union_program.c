#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main()
{
    union Data data;
    printf("size of memory occupied by data:%ld\n", sizeof(data));
    return 0;
}