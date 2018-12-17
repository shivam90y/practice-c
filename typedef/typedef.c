#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[50];
    char address[20];
    char class[30];
    char school[30];
    int roll_no;
} student;
int main()
{
    student shiv;
    strcpy(shiv.name, "Shivam yadav");
    strcpy(shiv.address, "Ghaziabad in UP");
    strcpy(shiv.class, "Eleventh");
    strcpy(shiv.school, "Bloom public school,Ghaziabad");
    shiv.roll_no = 420;
    printf("shiv.name:%s\n", shiv.name);
    printf("shiv.address:%s\n", shiv.address);
    printf("shiv.class:%s\n", shiv.class);
    printf("shiv.school:%s\n", shiv.school);
    printf("shiv.roll_no:%d\n", shiv.roll_no);
    return 0;
}
